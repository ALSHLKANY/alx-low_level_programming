#include "main.h"
#include <stdio.h>
/**
 * _memcpy -  copies memory area.
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
