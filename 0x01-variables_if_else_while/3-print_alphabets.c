#include <stdio.h>

/**
 * main - prints alpha to lower and uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchat(ch);
	putchar('\n');
	return (0);
}
