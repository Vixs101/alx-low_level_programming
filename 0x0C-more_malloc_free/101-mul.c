#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - checks if correct number of arguments have been provided
 * @num: parameter
 * Return: returns 1
 */

int is_valid_number(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * str_to_int - checks if both values are valid numbers
 * @num: parameter
 * Return: returns result
 */

int str_to_int(char *num)
{
	int i = 0;
	int result = 0;

	while (num[i] != '\0')
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (result);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 when successful
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
