#include <stdio.h>
/**
 * main - mmmm
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
		putchar(i++);
	i = 'a';
	while (i <= 'f')
		putchar(i++);
	putchar('\n');
	return (0);
}
