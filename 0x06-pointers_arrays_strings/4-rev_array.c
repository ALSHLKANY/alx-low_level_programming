#include "main.h"
#include <stdio.h>
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n/2; i++)
	{
		int x = a[i];

		a[i] = a[i - n - 1];
		a[i - n - 1] = x;
	}
}
