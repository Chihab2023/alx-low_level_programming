#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[100];
	int i, sum, x;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		p[i] = rand() % 78;
		sum += (p[i] + '0');
		putchar(p[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			x = 2772 - sum - '0';
			sum += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
