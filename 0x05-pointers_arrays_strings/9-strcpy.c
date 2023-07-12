#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, j;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (j = 0; j < l; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
