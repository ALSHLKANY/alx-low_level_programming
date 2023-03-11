#include <stdio.h>
#include "main.h"
/**
* _isalpha - Entry point.
* @c: char to check is it alpha. or not
* Return: 0 || 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
