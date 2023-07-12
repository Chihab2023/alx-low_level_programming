#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, a, x, l, f, digit;

	i = 0;
	a = 0;
	x = 0;
	l = 0;
	f = 0;
	digit = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			x = x * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (x);
}
