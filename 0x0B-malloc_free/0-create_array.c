#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creat array
 * @size: size of array
 * @c: charcter
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(c) * size);
	if (t == NULL)
		return (t);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
