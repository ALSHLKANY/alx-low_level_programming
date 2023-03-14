#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - argstostr
 * @ac: argc
 * @av: argv
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, x, chars;

	if (ac == 0 || av == NULL)
		return (NULL);
	chars = 0, x = 0;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			chars++;
	str = malloc(sizeof(char) * (chars + ac + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[x++] = av[i][j];
		str[x++] = '\n';
	}
	str[x] = '\0';
	return (str);
}
