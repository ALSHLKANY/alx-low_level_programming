#include "main.h"
#include <stdio.h>
/**
 * _memset -  fills memory with a constant byte.
 * @s: string
 * @b: char
 * @n: integer
 * Return : string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
