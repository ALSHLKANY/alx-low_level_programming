#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Entry point.
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int x = 10;

	while (x > 0)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		x--;
	}
}
