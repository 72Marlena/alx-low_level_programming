#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by new line
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0, if error return 1
 */
int main(int argc, char *argv[])
{
	int j, mult = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (j = 1 ; j < argc ; j++)
		{
			mult *= atoi(argv[j]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
