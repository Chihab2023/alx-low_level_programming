#include <unistd.h>

/**
 * main - entry point
 * description: the main function will prints
 * and that piece of art is useful\"
 * Dora Korpar, 2015-10-19
 * Return: 1 (not Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
