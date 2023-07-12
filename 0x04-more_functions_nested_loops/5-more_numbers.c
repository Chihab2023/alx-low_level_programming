#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int j, x;

	for (j = 0; j < 10; j++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}
}
