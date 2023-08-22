#include "main.h"

/**
 * swap_int - swapping values of two intergers
 * @a: first value
 * @b: second value
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
