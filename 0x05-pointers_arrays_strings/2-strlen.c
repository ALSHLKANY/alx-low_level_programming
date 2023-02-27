#include "main.h"
/**
 * _strlen - return string length
 * @s : string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	return (counter);
}
