#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long int S;
	long int F, SC;
	int CO;

	S = 0;
	F = 0;
	SC = 1;
	CO = 0;

	while (CO < 49)
	{
		S = F + SC;
		printf("%li, ", S);
		F = SC;
		SC = S;

		CO++;
	}
	S = F + SC;
	printf("%li\n", S);

	return (0);
}
