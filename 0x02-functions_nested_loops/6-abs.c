#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: number
 * Return: abs(x)
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
