#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
