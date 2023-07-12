#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int j = '0';

	for (; j <= '9'; j++)
	{
		if (j != '2' && j != '4')
			_putchar(j);
	}
	_putchar('\n');
}
