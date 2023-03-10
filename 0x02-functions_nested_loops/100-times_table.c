#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: :)
 * Return: void
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, res;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
					_putchar('0');
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(res / 100 + '0');
					res %= 100;
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
