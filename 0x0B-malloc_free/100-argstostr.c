#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - a function that concatenates all arguements of your program
 * @ac: argument count
 * @av: argument vector
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}
	str[pos] = '\0';
	return (str);
}
