#include <stdio.h>
/**
 * _isupper - checks if char is upper
 * @c: character
 *
 * Return: 1 || 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
