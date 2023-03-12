#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * StringCheck - checks string
 * @s: string to check
 * Return: boolean
 */
int IsContainSymbols(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (!isdigit(s[i]))
			return (1);
	return (0);
}
/**
 * main - main
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (IsContainSymbols(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
