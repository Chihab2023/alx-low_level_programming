#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= coins[j])
		{
			result++;
			n -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
