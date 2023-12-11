#include "main.h"
/**
 * *_memset - function
 * @s: parameter 1
 * @b: parameter 2
 * @n: Parameter 3
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
