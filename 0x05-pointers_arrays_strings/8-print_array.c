#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of intergers
 * @a: array to be used to be printed
 * @n: number of elements of an array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0 ; l < n ; l++)
	{
		printf("%d", a[l]);
		if (l < n - 1)
			printf(", ");
	}
	printf("\n");
}
