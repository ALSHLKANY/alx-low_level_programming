#include <stdio.h>
#include "main.h"
/**
 * void swap_int - swap 2 values
 * @a : value 1
 * @b : value 2
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
