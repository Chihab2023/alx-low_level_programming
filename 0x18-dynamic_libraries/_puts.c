#include "main.h"
/**
 * _puts - function code definition
 * @str: The string parameter
 */
void _puts(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
