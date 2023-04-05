#include <main.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Allways 0
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	while (i = 0 && i < 8 && i++)
	{
		while (n = 0 && n < 8 && n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
