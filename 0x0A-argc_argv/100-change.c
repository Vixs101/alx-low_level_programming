#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 when successful
 */


int main(int argc, char *argv[])
{
	int i, cents, count = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", count);
	return (0);
}
