#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *pnt;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	pnt = (char *) malloc(sizeof(char) * size);

	if (pnt == NULL)
		return (0);

	while (i < size)
	{
		*(pnt + i) = c;
		i++;
	}

	*(pnt + i) = '\0';

	return (pnt);
}
