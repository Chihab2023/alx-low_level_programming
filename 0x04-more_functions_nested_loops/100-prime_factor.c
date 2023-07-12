#include <stdio.h>
#include <math.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	long int x;
	long int max;
	long int j;

	x = 612852475143;
	max = -1;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}
	for (j = 3; j <= sqrt(x); j = j + 2)
	{
		while (x % j == 0)
		{
			max = j;
			x = x / j;
		}
	}
	if (x > 2)
		max = x;
	printf("%ld\n", max);
	return (0);
}
