#include "main.h"
#include <stdio.h>
/**
 * _strchr -  locates a character in a string.
 * @s: the string
 * @c: the charachter
 * Return: a pointer to the first c || NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (s[i] == c)
		return (&s[i]);
	return (0);
}
