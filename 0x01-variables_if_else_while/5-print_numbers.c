#include <stdlib.h>
#include <stdio.h>

/**
 * main - print single digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
