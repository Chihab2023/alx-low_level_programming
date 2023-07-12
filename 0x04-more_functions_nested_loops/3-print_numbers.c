#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: void
 */

void print_numbers(void)
{
	char  x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
