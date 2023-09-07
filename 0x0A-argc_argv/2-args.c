#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arg
 * @argv: the string of an arg
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0 ; j < argc ; j++)
		printf("%s\n", argv[j]);
	return (0);
}
