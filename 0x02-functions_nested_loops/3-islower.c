#include "main.h"

/**
 * _islower - look for lowercase letters
 * @c: c is an ascii character
 * Return: 1 if the letter is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
