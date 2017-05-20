#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "movement.h"

#define MAX_BUFFER_SIZE 256
#define MAX_STRING_SIZE 2048

static int keep_printing = 1;

static int read_file(const char*, char*, int*);
void* keep_printing_maze(void*);

int main(int argc, char const *argv[])
{
  int maze_size[2] = {0, 0}; //{Rows, Columns}
  char string[MAX_STRING_SIZE];
  pthread_t manager, printing;

  if (argc < 2)
  {
    printf("Ingrese un archivo con el cual trabajar.\n");
    return 1;
  }

  if (!read_file(argv[1], string, maze_size))
  {
    printf("El archivo ingresado no se pudo abrir o no existe. Intentelo de nuevo.\n");
    return 1;
  }

  init_threads_list_mutex();
  init_maze_mutex();

  create_maze(string, maze_size[0], maze_size[1]);
  create_walker(-1, 0, 0, 2);

  pthread_create(&printing, NULL, keep_printing_maze, NULL);
  pthread_create(&manager, NULL, check_for_threads, NULL);

  pthread_join(manager, NULL);
  keep_printing = 0;
  pthread_join(printing, NULL);

  print_finished_walkers();

  destroy_maze_mutex();
  destroy_threads_list_mutex();
  delete_maze();
  delete_walkers();

  return 0;
}

static int read_file(const char* file_name, char* string, int* maze_size)
{
  FILE* maze_file = fopen(file_name, "r");
  char buffer[MAX_BUFFER_SIZE];
  char* tok;
  char* subString;
  int i = 0;

  if (!maze_file)
    return 0;

  fgets(buffer, sizeof(buffer), maze_file);
  tok = strtok(buffer, " \n");

  while (tok)
  {
    maze_size[i++] = atoi(tok);
    tok = strtok(NULL, " \n");
  }

  printf("0");

  while (!feof(maze_file))
  {
    printf("1");
    fgets(buffer, MAX_BUFFER_SIZE, maze_file);
    printf("2");
    strncpy(subString, buffer, maze_size[1]);
    printf("3");
    strcat(string, subString);
  }

  fclose(maze_file);
  return 1;
}

void* keep_printing_maze(void* _)
{
  while (keep_printing)
  {
    print_maze();
    sleep(1);
  }

  return NULL;
}
