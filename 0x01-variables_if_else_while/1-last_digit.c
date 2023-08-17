#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Last digits
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	r = n % 10;
	if (n > 5)
		printf("Last digits of %d is %d and is greater than 5", n, r);
	else if (n == 0)
		printf("Last digits of %d is %d and is 0", n, r);
	else if (n < 6 && n != 0)
		printf("Last digits of %d is %d and is less than 6 not 0", n, r);
	printf("\n");

	return (0);
}
