#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string
 * @s2: string
 * Return: pointer to s1+s2
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	t = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		t[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		t[i + s1_len] = s2[i];
	t[i + s1_len] = '\0';
	return (t);

}
