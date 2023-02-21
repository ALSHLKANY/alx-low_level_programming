#include <stdio.h>
#include "main.h"
/**
 * times_table - rints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		int j = 0;

		for (; j < 10; j++)
		{
			int res = i * j;

			if (res <= 9)
			{
				if (j >= 1)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + res);
			}
			else
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
