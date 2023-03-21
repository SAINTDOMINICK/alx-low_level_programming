#include "main.h"
/**
 * print_alphabet
 * make the alphabet
 * print_alphabet
 * Return:void
 */
void print_alphabet(void)
{
	char ch;

	while (ch = 'a' && ch <= 'z' && ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
