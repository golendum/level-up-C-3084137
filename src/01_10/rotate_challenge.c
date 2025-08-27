#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_1_COLUMNS 3
#define GRID_1_ROWS 8
#define GRID_2_COLUMNS 5
#define GRID_2_ROWS 5
#define GRID_3_COLUMNS 6
#define GRID_3_ROWS 4

int main()
{
  // general initializations
  char rand_char;
  int r;
  srand((unsigned)time(NULL));

  int matrix_count = 1;
  printf("Original matrix %d:\n", matrix_count);
  char char_grid_1[GRID_1_ROWS][GRID_1_COLUMNS];
  for (int i = 0; i < GRID_1_ROWS; i++)
  {
    for (int j = 0; j < GRID_1_COLUMNS; j++)
    {
      r = rand() % 26;
      rand_char = 'a' + r;
      char_grid_1[i][j] = rand_char;
      printf(" %c ", char_grid_1[i][j]);
    }
    printf("\n");
  }

  printf("Rotated matrix %d:\n", matrix_count);
  for (int i = 0; i < GRID_1_COLUMNS; i++)
  {
    for (int j = 0; j < GRID_1_ROWS; j++)
    {
      printf(" %c ", char_grid_1[GRID_1_ROWS - j - 1][i]);
    }
    printf("\n");
  }

  matrix_count = 2;
  printf("Original matrix %d:\n", matrix_count);
  char char_grid_2[GRID_2_ROWS][GRID_2_COLUMNS];
  for (int i = 0; i < GRID_2_ROWS; i++)
  {
    for (int j = 0; j < GRID_2_COLUMNS; j++)
    {
      r = rand() % 26;
      rand_char = 'a' + r;
      char_grid_2[i][j] = rand_char;
      printf(" %c ", char_grid_2[i][j]);
    }
    printf("\n");
  }

  printf("Rotated matrix %d:\n", matrix_count);
  for (int i = 0; i < GRID_2_COLUMNS; i++)
  {
    for (int j = 0; j < GRID_2_ROWS; j++)
    {
      printf(" %c ", char_grid_2[GRID_2_ROWS - j - 1][i]);
    }
    printf("\n");
  }

  matrix_count = 3;
  printf("Original matrix %d:\n", matrix_count);
  char char_grid_3[GRID_3_ROWS][GRID_3_COLUMNS];
  for (int i = 0; i < GRID_3_ROWS; i++)
  {
    for (int j = 0; j < GRID_3_COLUMNS; j++)
    {
      r = rand() % 26;
      rand_char = 'a' + r;
      char_grid_3[i][j] = rand_char;
      printf(" %c ", char_grid_3[i][j]);
    }
    printf("\n");
  }

  printf("Rotated matrix %d:\n", matrix_count);
  for (int i = 0; i < GRID_3_COLUMNS; i++)
  {
    for (int j = 0; j < GRID_3_ROWS; j++)
    {
      printf(" %c ", char_grid_3[GRID_3_ROWS - j - 1][i]);
    }
    printf("\n");
  }

  return 0;
}