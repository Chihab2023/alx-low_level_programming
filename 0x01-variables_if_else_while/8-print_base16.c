#include <stdio.h>

/**
 * main - prints : all single digit
 * Programming is like building a multilingual puzzle
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;

	while (x <= 102)
	{
		putchar(x);
		if (x == 57)
			x += 39;
		x++;
	}
	putchar(10);
	return (0);
}
