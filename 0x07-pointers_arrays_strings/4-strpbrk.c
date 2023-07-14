#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x, j;

	for (x = 0; *s != '\0'; x++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
