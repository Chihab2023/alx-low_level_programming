#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *d;
	unsigned int i, l;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	while ((d[i] = str[i]) != '\0')
		i++;

	return (d);
}
