#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	x = malloc(sizeof(char) * (l1 + l2 + 1));
	if (x == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < l1)
		{
			x[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			x[i] = s2[j];
			i++;
			j++;
		}
	}
	x[i] = '\0';

	return (x);
}
