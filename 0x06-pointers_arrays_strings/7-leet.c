#include "main.h"
/**
 * *leet - converts characters to numbers
 * @p: string to be converted
 * Return: returns the string
 */
char *leet(char *p)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; p[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
			if (p[i] == a[j])
				p[i] = b[j];
	}
	return (p);
}
