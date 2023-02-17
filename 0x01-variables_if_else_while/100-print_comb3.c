#include <stdio.h>
/**
 * main - mmmm
 *
 * Return: 0
 */
int main(void)
{
	int i = '0', j = '1';

	while (i <= '8')
	{
		putchar(i);
		putchar(j);
		if (!(i == '8' && j == '9'))
		{
			putchar(',');
			putchar(' ');
		}
		if (j == '9')
		{
			i++;
			j = i+1 ;
		}
		else
		{
			j++;
		}
	}
	putchar('\n');
	return (0);
}
