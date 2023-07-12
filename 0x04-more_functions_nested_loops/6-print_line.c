#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: An int
 * Return: Always 0
 */
void print_line(int n)
{
	int j = 0;

	if (n > 0)
	{
		for (; j < n; j++)
			_putchar('_');
	}
	_putchar('\n');
}
