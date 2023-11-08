#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int y;

	if (index > 64)
		return (-1);
	y = index;
	for (x = 1; y > 0; x *= 2, y--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
