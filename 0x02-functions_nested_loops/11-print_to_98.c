#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - :(
 * @n: num
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("98");
	}
	else
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
	}
}
