#include "main.h"

/**
 * binary_to_uint -function that converts
 * a binary number to an unsigned int
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int len, b_two;

	if (!b)
		return (0);

	x = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b_two = 1; len >= 0; len--, b_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			x += b_two;
		}
	}

	return (x);
}
