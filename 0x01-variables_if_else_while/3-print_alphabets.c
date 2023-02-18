#include <stdio.h>
/**
 * main - mmmm
 *
 * Return: 0
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
		putchar(i++);
	i = 'A';
	while (i <= 'Z')
		putchar(i++);
	putchar('\n');
	return (0);
}
