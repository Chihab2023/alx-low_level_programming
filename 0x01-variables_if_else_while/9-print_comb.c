#include <stdio.h>

/**
 * main - entry point
 * description: the main function will prints
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar (x + 48);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
