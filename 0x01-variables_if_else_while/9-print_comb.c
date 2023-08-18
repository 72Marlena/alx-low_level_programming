#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)

{
	int n;
	int j;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (j = 0 ; j < n ; j++)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
