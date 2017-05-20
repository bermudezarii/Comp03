#include "movement.h"

void init_maze_mutex(void)
{
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_PRIVATE);
  pthread_mutex_init(&mu_maze, &attr);
}

void* check_for_threads(void* _)
{
  Node* checker = NULL;
  pthread_attr_t attr;

  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);

  while (!all_threads_death())
  {
    pthread_mutex_lock(&mu_threads_list);

    if (!checker)
      checker = get_head();

    if (!checker->walker.threadWalker)
      pthread_create(&checker->walker.threadWalker, &attr, move, (void*) &checker->walker);

    checker = checker->next;

    pthread_mutex_unlock(&mu_threads_list);
  }

  pthread_attr_destroy(&attr);
  return NULL;
}

void* move(void* param)
{
  int i;
  MazeWalker* walker = (MazeWalker*) param;

  for(i = 0; i < 4; i++)
    walker->directions[i] = 0;

  while (!colides(walker->row, walker->column))
  {
    pthread_mutex_lock(&mu_maze);
    put_symbol(walker->id, walker->color, walker->row, walker->column);
    check_around(walker->directions, walker->row, walker->column);
    pthread_mutex_unlock(&mu_maze);

    for (i = 0; i < 4; i++)
    {
      if(walker->directions[i])
      {
        if(walker->direction != i)
            create_walker(walker->row, walker->column, walker->steps, i);

        walker->directions[i] = 0;
      }
    }

    switch (walker->direction)
    {
      case UP:
        walker->row--;
        break;

      case RIGHT:
        walker->column++;
        break;

      case DOWN:
        walker->row++;
        break;

      case LEFT:
        walker->column--;
        break;
    }

    if (is_exit(walker->row, walker->column))
      walker->exited = 1;

    walker->steps++;
    sleep(2);
  }

  walker->finished = 1;
  return NULL;
}

void destroy_maze_mutex(void)
{
  pthread_mutex_destroy(&mu_maze);
  pthread_mutexattr_destroy(&attr);
}
