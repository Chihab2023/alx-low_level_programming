#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);

