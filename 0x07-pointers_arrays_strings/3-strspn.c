#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: Substring of accepted chars
 * Return: Length of occurrence
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x, flag;

	x = 0;

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
