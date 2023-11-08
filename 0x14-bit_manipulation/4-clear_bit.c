#include "main.h"
#include <stdio.h>
/**
 * clear_bit - F set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: position to change
 * Return: 1 if it true,0 -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int h;

	if (index > 64)
		return (-1);
	h = index;
	for (i = 1; h > 0; i *= 2, h--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
