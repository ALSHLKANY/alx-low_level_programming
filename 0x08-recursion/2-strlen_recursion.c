#include "main.h"
/**
 * _strlen_recursion - return the length of s
 * @s: string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x = _strlen_recursion(s + 1);
		return (++x);
	}
	return (0);
}
