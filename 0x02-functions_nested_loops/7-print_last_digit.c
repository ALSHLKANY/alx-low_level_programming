#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print the last degit of the number
 * @n: the number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar((n % 10) + '0');
	return (n % 10);
}
