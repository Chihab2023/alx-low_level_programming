#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: n is an int
 *
 * Description:
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
