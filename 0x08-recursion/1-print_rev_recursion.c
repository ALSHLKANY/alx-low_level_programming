#include "main.h"
/**
 * _print_rev_recursion - print string reversed
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s);
		s++;
		_putchar(*s);
	}
}
