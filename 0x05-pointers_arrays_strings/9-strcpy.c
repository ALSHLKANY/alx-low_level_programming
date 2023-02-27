#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copy src string to dest string
 * @dest : destination string
 * @src : the original string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}
