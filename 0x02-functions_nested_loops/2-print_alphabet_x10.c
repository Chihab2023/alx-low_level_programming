#include "main.h"

/**
 *print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char L = 'a';

	while (x < 10)
	{
		L = 'a';
		while (L <= 'z')
		{
			_putchar(L);
			L++;
		}
		_putchar('\n');

		x++;
	}
}
