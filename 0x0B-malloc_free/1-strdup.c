#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy string
 * @str: string
 * Return: pointer to the copt of str
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *t;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	t = malloc(sizeof(char) * size + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = str[i];
	return (t);
}
