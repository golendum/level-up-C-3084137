#include <stdio.h>
#include <math.h>

void calculate_change(double change)
{
  int quarters, dimes, nickels, pennies;
  double remainder = change;
  quarters = floor(change / 0.25);
  remainder -= (quarters * 0.25);
  dimes = floor(remainder / 0.1);
  remainder -= (dimes * 0.1);
  nickels = floor(remainder / 0.05);
  remainder -= (nickels * 0.05);
  pennies = (int)round(remainder / 0.01);

  printf("The change required for %.2f is: %d quarters, %d dimes, %d nickels and %d pennies.\n", change, quarters, dimes, nickels, pennies);
}

int main()
{
  /* some sample values to test with */
  double change_test_values[] = {
      0.49,
      1.27,
      0.75,
      1.31,
      0.83};
  int x;

  /* output each of the change amounts for the above test values */
  for (x = 0; x < 5; x++)
  {
    calculate_change(change_test_values[x]);
  }

  return (0);
}
