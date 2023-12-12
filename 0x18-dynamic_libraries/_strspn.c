#include "main.h"

/**
 * _strspn - function that gets the length of a prefix string
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x = 0, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (x);
		}
	}

	return (0);
}
