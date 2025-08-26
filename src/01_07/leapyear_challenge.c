#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[], int size)
{
	printf("Array of leap years:\n[");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
		{
			printf(", ");
		}
	}
	printf("]\n");
}

int leapyear(int year)
{
	if (year % 400 == 0)
		return 1;
	else if (year % 100 == 0)
		return 0;
	else if (year % 4 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int *dynamic_array_of_leap_years = NULL;
	int arr_size = 0;

	for (int test_year = 1582; test_year <= 2101; test_year++)
	{
		if (leapyear(test_year))
		{
			arr_size++;
			dynamic_array_of_leap_years = (int *)realloc(dynamic_array_of_leap_years, sizeof(int) * arr_size);
			dynamic_array_of_leap_years[arr_size - 1] = test_year;
		}
	}
	print_arr(dynamic_array_of_leap_years, arr_size);

	return 0;
}