#include <unistd.h>

/**
 * _putchar - function that writes the character
 * @c: The character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
