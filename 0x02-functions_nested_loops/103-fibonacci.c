#include <stdio.h>

/**
 * main - prints the sum of all even
 * Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int total_S, S, F, SC;

	total_S = 0;
	S = 0;
	F = 0;
	SC = 1;

	while (S < 4000000)
	{
		S = F + SC;
		if (S % 2 == 0)
		{
			total_S += S;
		}
		F = SC;
		SC = S;
	}

	printf("%li\n", total_S);

	return (0);
}
