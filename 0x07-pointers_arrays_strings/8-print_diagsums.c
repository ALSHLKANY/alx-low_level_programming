#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of matrix
 * @a: array
 * @size: size of sqr matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, j;

	for (i = 0; i < size; i++)
		sum1 += a[i][i];
	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--)
		sum2 += a[i][j];
	printf("%d, %d", sum1, sum2);
}
