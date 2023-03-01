#include <stdio.h>
#include "main.h"
/**
 * _strncat -  compares two strings.
 * @s1 : string
 * @s2 : string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			break;
	return (s1[i] - s2[i]);
}
