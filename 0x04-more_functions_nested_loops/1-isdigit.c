#include "main.h"

/**
 * _isdigit - check for number inbetween
 * @c: input number
 * Return: 1 if its a number (0 to 9) in other case
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
