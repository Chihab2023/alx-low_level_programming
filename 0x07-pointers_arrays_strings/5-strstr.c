#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[x] != '\0'; x++)
		{
			if (haystack[i + x] != needle[x])
				break;
		}
		if (!needle[x])
			return (&haystack[i]);
	}
	return (NULL);
}
