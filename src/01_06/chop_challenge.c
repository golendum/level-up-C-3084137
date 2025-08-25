#include <stdio.h>
#include <stdlib.h>

int string_length(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		;
	return i;
}

void print_str(char *str)
{
	int length = string_length(str);

	for (int i = 0; i < length; i++)
	{
		putchar(str[i]);
	}
	printf("\n");
}

char *left(char *s, int len)
{
	char *left_str = malloc(len + 1);
	for (int i = 0; i < len; i++)
	{
		left_str[i] = s[i];
	}
	left_str[len] = '\0';
	return left_str;
}

char *right(char *s, int len)
{
	int full_string_length = string_length(s);
	char *right_str = malloc(len + 1);
	for (int i = 0; i < len; i++)
	{
		right_str[i] = s[full_string_length - len + i];
	}
	right_str[len] = '\0';
	return right_str;
}

char *mid(char *s, int offset, int len)
{
	int full_string_length = string_length(s);
	if (offset >= full_string_length)
	{
		return ("ERROR: The offset value must be less than the size of the string.\n");
	}

	char *mid_str = malloc(len + 1);
	for (int i = 0; (i < len) && ((i + offset) < full_string_length); i++)
	{
		mid_str[i] = s[i + offset - 1];
	}
	mid_str[len] = '\0';
	return mid_str;
}

int main()
{
	char string[] = "Once upon a time, there was a string";
	// printf("The string length of the given string is %d\n", string_length(string));

	printf("Original string: %s\n", string);
	printf("Left %d characters: %s\n", 16, left(string, 16));
	printf("Right %d characters: %s\n", 18, right(string, 18));
	printf("Middle %d characters: %s\n", 11, mid(string, 13, 11));

	return (0);
}
