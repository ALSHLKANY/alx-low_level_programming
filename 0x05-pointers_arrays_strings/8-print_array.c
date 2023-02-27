#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a : array of integers
 * @n : number of elements that will be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}

}
