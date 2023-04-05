#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to be set
 * @to: parameter to be pointed too
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
