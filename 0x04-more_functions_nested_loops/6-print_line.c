#include <stdio.h>
#include "main.h"
/**
 * print_line - 
 * @n: num
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}

