#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && x == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list);
}
