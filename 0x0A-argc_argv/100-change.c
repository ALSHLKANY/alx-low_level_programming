#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if else (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		int x = atoi(argv[1]), coins = 0;

		while (x > 0)
		{
			if (x % 25 == 0)
				x -= 25;
			else if (x % 10 == 0)
				x -= 10;
			else if (x % 5 == 0)
				x -= 5;
			else if (x % 2 == 0)
				x -= 2;
			else
				x--;
			coins++;
		}
		printf("%d\n", coins);
	}
	return (0);
}
