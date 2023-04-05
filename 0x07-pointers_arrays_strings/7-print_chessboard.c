#include "main.h"
/**
 * print_chessboard - prints an array in the form of a chessboard
 * @a: array to be printed
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
