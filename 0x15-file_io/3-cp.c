#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @f_from: file_from.
 * @f_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_f(f_from, f_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(f_from, buf, 1024);
		if (nchars == -1)
			error_f(-1, 0, argv);
		nwr = write(f_to, buf, nchars);
		if (nwr == -1)
			error_f(0, -1, argv);
	}
	err = close(f_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
		err = close(f_to);
		if (err == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
			exit(100);
		}
		return (0);
}
