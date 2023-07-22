#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum
 * @n: number of argument
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int s = 0;
	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
		s += va_arg(list, int);

	va_end(list);

	return (s);
}
