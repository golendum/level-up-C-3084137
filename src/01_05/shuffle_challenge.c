#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_str(char *str)
{
  int length = strlen(str);

  for (int i = 0; i < length; i++)
  {
    putchar(str[i]);
  }
  printf("\n");
}

/*
void shuffling_once(char *str)
{
  int length = strlen(str);
  char *new_str_after_shuffle = malloc(length);
  strcpy(new_str_after_shuffle, str);

  for (int i = 1; i < (length - 1); i++)
  {
    new_str_after_shuffle[(2 * i) % (length - 1)] = str[i];
  }
  print_str(new_str_after_shuffle);
}
*/

int shuffle(char *str)
{
  int length = strlen(str);
  char *temp_str_during_shuffle = malloc(length);
  char *new_str_after_shuffle = malloc(length);
  strcpy(new_str_after_shuffle, str);
  int count = 0;

  do
  {
    strcpy(temp_str_during_shuffle, new_str_after_shuffle);
    for (int i = 1; i < (length - 1); i++)
    {
      new_str_after_shuffle[(2 * i) % (length - 1)] = temp_str_during_shuffle[i];
    }
    print_str(new_str_after_shuffle);
    count++;
  } while (strcmp(new_str_after_shuffle, str));

  return count;
}

int main()
{
  char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  // printf("This is just to test the shuffling once str function. Th printed string is: ");
  // shuffling_once(alphabet);

  int total_shuffles = shuffle(alphabet);
  printf("Number of shuffles: %d\n", total_shuffles);
  return 0;
}