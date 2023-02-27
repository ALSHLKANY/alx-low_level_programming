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
	for (i = 0; i < counter / 2; i++)
	{
		char x;

		x = s[counter - i - 1];
		s[counter - i - 1] = s[i];
		s[i] = x;
	}
}
