#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x = 0, d, n, len, f, digit;

	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++d;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - function that adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s, n, i, j, k;

	s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		n = _atoi(argv[k]);
		if (n >= 0)
		{
			s += n;
		}
	}

	printf("%d\n", s);
	return (0);
}
