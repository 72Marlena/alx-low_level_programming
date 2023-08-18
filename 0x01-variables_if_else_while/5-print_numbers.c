#include <stdio.h>

/**
 * main - printing numbers
 *
 * Return: 0 (Always)
 */

int main(void)

{
	int n;
	int i = 10;

	for (n = '0' ; n < i ; n++)
		printf("Single digit %d", n);
	printf("\n");

	return (0);
}
