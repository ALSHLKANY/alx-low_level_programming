#include "main.h"
#include <stdio.h>
#include <strlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: coulmn
 * @height: rows
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **t, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		t[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	return (t);
}
