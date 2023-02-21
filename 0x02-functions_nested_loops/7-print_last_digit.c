#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last degit of the number
 * @n: the number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int mod = n % 10;

	if (mod < 0)
		mod *= -1;

	_putchar(mod + '0');
	return (mod);
}
