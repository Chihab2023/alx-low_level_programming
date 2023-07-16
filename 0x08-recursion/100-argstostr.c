#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count
  *@av: pointer to array
  *Return: NULL
  */
char *argstostr(int ac, char **av)
{
	int i, j, x, size;
	char *arg;

	size = 0;
	x = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[x] = av[i][j];
			j++;
			x++;
		}
		arg[x] = '\n';
		x++;
		i++;
	}
	arg[x] = '\0';
	return (arg);
}
