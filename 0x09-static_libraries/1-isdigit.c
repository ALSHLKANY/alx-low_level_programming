#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check the char is digit or not
 *
 * @c: character
 *
 * Return: 1 || 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
