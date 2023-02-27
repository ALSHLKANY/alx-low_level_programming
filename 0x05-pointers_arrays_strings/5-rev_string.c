#include "main.h"
/**
 * rev_string - reverse string
 * @s : string
 */
void rev_string(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	char x[counter];

	for (i = 0; i < counter; i++)
		x[i] = s[counter - i - 1];
	for (i = 0; i < counter; i++)
		s[i] = x[i];
	_putchar('\n');
}
