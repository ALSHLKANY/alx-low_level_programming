#include <stdio.h>
#include "main.h"
/**
 * print_sign - function
 * @n: number
 * Return: 0 || 1 || -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("0");
		return (0);
	}
	printf("-1");
	return (-1);
}
