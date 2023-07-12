#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * description: it will print alphabet except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
{
	if (c == 'e' || c == 'q')
		c++;
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
