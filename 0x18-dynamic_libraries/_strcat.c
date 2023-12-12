#include "main.h"
/**
 * *_strcat - function
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to the dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}

	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
