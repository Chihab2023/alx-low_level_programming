#include <stdio.h>

/**
 * main - print z to a
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
