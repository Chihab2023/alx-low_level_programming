#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sepr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepr, str);
					break;
				default:
					x++;
					continue;
			}
			sepr = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
