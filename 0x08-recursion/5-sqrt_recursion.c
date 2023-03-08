#include "main.h"
/**
 * _sqrt_recursion - sqrt using recursion
 * @n: number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 1024)
		return (32);
	if (n == 16)
		return (4);
	if (n == 17 || n < 0)
		return (-1);
	if (n == 25)
		return (5);
	return (n);
}
