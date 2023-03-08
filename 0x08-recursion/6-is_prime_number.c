#include "main.h"
/**
 * solve - :)
 * @n: number
 * @i: var :(
 * Return: 1 || 0
 */
int solve(int n, int i)
{
	if (i >= n || n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (solve(n, ++i));
}
/**
 * is_prime_number - :)
 * @n: number
 * Return: 1 || 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (solve(n, 2));
}
