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
	if (size == 0)
		return (NULL);
	char *t = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
