#include "maze_walker.h"

void init_threads_list_mutex(void)
{
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_PRIVATE);
  pthread_mutex_init(&mu_threads_list, &attr);
}

void create_walker(int row, int column, int steps, int direction)
{
  int i;
  MazeWalker new_walker;

  new_walker.row = row;
  new_walker.column = column;
  new_walker.steps = ++steps;
  new_walker.color = color_count++ % 8;
  new_walker.exited = 0;
  new_walker.finished = 0;
  new_walker.direction = direction;
  new_walker.threadWalker = NULL;

  switch (new_walker.direction)
  {
    case UP:
      new_walker.row--;
      break;

    case RIGHT:
      new_walker.column++;
      break;

    case DOWN:
      new_walker.row++;
      break;

    case LEFT:
      new_walker.column--;
      break;
  }

  for (i = 0; i < 2; i++)
  {
    if (colides(new_walker.row, new_walker.column))
      return;

    sleep(1);
  }

  pthread_mutex_lock(&mu_threads_list);
  new_walker.id = thread_count++;
  add_walker(new_walker);
  pthread_mutex_unlock(&mu_threads_list);
}

static void add_walker(MazeWalker walker)
{
  if (!head)
  {
    head = (Node*) malloc(sizeof(Node));
    head->walker = walker;
    head->next = NULL;
    current = head;
    return;
  }

  current->next = (Node*) malloc(sizeof(Node));
  current->next->walker = walker;
  current->next->next = NULL;
  current = current->next;
}

int all_threads_death(void)
{
  Node* temp = head;

  while (temp)
  {
    if (!temp->walker.finished)
      return 0;

    temp = temp->next;
  }

  return 1;
}

Node* get_head(void)
{
  return head;
}

void print_finished_walkers(void)
{
  current = head;

  while (current)
  {
    if (current->walker.exited)
      printf("El caminante %d llego a la salida ubicada en la fila %d columna %d en %d pasos.\n",
            current->walker.id, current->walker.row, current->walker.column, current->walker.steps);

    current = current->next;
  }

  printf("\n\n");
}

void delete_walkers(void)
{
  while (head)
  {
    current = head;
    head = head->next;
    free(current);
  }
}

void destroy_threads_list_mutex(void)
{
  pthread_mutex_destroy(&mu_threads_list);
  pthread_mutexattr_destroy(&attr);
}
