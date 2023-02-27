#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str : string
 */
void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	int n = (length_of_the_string - 1) / 2, i;

	if(length_of_the_string % 2 == 0)
		for (i = (length_of_the_string / 2) - 1; i < length_of_the_string; i++)
			_putchar(str[i]);
	else
		for (i = n + 1; i < length_of_the_string; i++)
                        _putchar(str[i]);
	_putchar('\n');
}
