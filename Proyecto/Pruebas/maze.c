#include "maze.h"

void create_maze(char* string, int rows, int columns)
{
  int i, j;
  int index;

  maze.rows = rows;
  maze.columns = columns;
  maze.matrix = (Cell**) malloc(sizeof(Cell*) * maze.rows);

  for (i = 0; i < maze.rows; i++)
  {
    maze.matrix[i] = (Cell*) malloc(sizeof(Cell) * maze.columns);
    index = i * maze.columns;

    for (j = 0; j < maze.columns; j++)
    {
      printf("%c", string[index]);
      sprintf(maze.matrix[i][j].symbol, "%c", string[index++]);
      maze.matrix[i][j].color = 0;
    }

    printf("\n");
  }
}

void check_around(int* directions, int row, int column)
{
  if (!colides(row-1, column))
    directions[UP] = 1;

  if (!colides(row, column+1))
    directions[RIGHT] = 1;

  if (!colides(row+1, column))
    directions[DOWN] = 1;

  if (!colides(row, column-1))
    directions[LEFT] = 1;
}

int colides(int row, int column)
{
  return (row < 0) ||
         (column >= maze.columns) ||
         (row >= maze.rows) ||
         (column < 0) ||
         (strcmp(maze.matrix[row][column].symbol, " ") != 0 &&
          strcmp(maze.matrix[row][column].symbol, "/") != 0 ) ? 1 : 0;
}

int is_exit(int row, int column)
{
  return (row >= 0) &&
         (column < maze.columns) &&
         (row < maze.rows) &&
         (column >= 0) &&
         (strcmp(maze.matrix[row][column].symbol, "/") == 0) ? 1 : 0;
}

void put_symbol(int id, int color, int row, int column)
{
  sprintf(maze.matrix[row][column].symbol, "%d", id);
  maze.matrix[row][column].color = color;
}

void print_maze(void)
{
  int i, j;

  for (i = -1; i <= maze.rows; i++)
  {
    printf("|");

    for (j = 0; j < maze.columns; j++)
    {
      if ((i == -1) || (i == maze.rows))
        printf("---");
      else if (strlen(maze.matrix[i][j].symbol) == 2)
        printf("\e[3%dm %s\e[30m", maze.matrix[i][j].color, maze.matrix[i][j].symbol);
      else
        printf("\e[3%dm  %s\e[30m", maze.matrix[i][j].color, maze.matrix[i][j].symbol);
    }

    printf("|\n");
  }

  printf("\n\n");
}

void delete_maze(void)
{
  int i;

  for (i = 0; i < maze.rows; i++)
    free(maze.matrix[i]);

  free(maze.matrix);
}
