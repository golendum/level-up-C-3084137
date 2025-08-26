#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MOVES 9 // number of moves a king can make
#define ROWS 8
#define COLUMNS 8

void print_chess_board(int king_y_coord, int king_x_coord)
{
  printf("Chess board:\n");
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLUMNS; j++)
    {
      if (i == king_y_coord && j == king_x_coord)
      {
        printf("\tK");
      }
      else
      {
        printf("\t.");
      }
    }
    printf("\n");
  }
}

int main()
{
  // initialize the king's starting coordinates
  int king_y_coord = 3;
  int king_x_coord = 4;
  printf("Start:\n");
  print_chess_board(king_y_coord, king_x_coord);
  int king_on_board = 1; // bool statement
  int move_count = 0;    // value to print
  int move_option;

  // initialize randomizer based on time
  srand((unsigned)time(NULL));

  while (king_on_board)
  {
    move_option = rand() % MOVES;
    if (move_option == 0)
    {
      // Don't move
      printf("The king is not moving.\n");
      print_chess_board(king_y_coord, king_x_coord);
      move_count++;
    }

    else if (move_option == 1)
    {
      // move straight right
      printf("The king is moving straight right.\n");
      king_x_coord++;
      move_count++;
      if (king_x_coord == COLUMNS)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 2)
    {
      // move diagonally up-right
      printf("The king is moving diagonally up-right.\n");
      king_x_coord++;
      king_y_coord--;
      move_count++;
      if (king_x_coord == COLUMNS || king_y_coord == -1)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 3)
    {
      // move straight up
      printf("The king is moving straight up.\n");
      king_y_coord--;
      move_count++;
      if (king_y_coord == -1)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 4)
    {
      // move diagonally up-left
      printf("The king is moving diagonally up-left.\n");
      king_x_coord--;
      king_y_coord--;
      move_count++;
      if (king_x_coord == -1 || king_y_coord == -1)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 5)
    {
      // move left
      printf("The king is moving straight left.\n");
      king_x_coord--;
      move_count++;
      if (king_x_coord == -1)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 6)
    {
      // move diagonally down-left
      printf("The king is moving diagonally down-left.\n");
      king_x_coord--;
      king_y_coord++;
      move_count++;
      if (king_x_coord == -1 || king_y_coord == ROWS)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 7)
    {
      // move straight down
      printf("The king is moving straight down.\n");
      king_y_coord++;
      move_count++;
      if (king_y_coord == ROWS)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }

    else if (move_option == 8)
    {
      // move diagonally down-right
      printf("The king is moving diagonally down-right.\n");
      king_x_coord++;
      king_y_coord++;
      move_count++;
      if (king_x_coord == COLUMNS || king_y_coord == ROWS)
      {
        king_on_board = 0;
        printf("The king moved off the board.\nThe king moved a total of %d moves.\n", move_count);
      }
      else
      {
        print_chess_board(king_y_coord, king_x_coord);
      }
    }
  }
  return 0;
}