#include "main.h"

/**
 * reverse_array - reverss an array of integers
 * @a: aarray
 * @n: number ofelement of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
