#include "main.h"
/**
 * _memcpy - function 
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: number of copy param
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
