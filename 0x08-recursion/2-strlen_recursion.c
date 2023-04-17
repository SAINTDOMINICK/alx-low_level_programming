#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	while (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}