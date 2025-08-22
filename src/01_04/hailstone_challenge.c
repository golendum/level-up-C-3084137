#include <stdio.h>

int collatz(int starting_value)
{
	int n = starting_value;
	int count = 1;
	printf("Hailstone sequence: ");
	printf("%d", n);
	while (n != 1)
	{
		printf(", ");
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = (n * 3) + 1;
		}
		printf("%d", n);
		count++;
	}
	printf("\n");
	return count;
}

int main()
{
	int starting_value;
	printf("Enter the starting value: ");
	scanf("%d", &starting_value);
	printf("Sequence length: %d\n", collatz(starting_value));
}