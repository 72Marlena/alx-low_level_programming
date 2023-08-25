#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 0, m = 0;
	time_t tt;

	srand((unsigned int) time(&tt));
	while (m < 2772)
	{
		n = rand() % 128;
		if ((m + n) > 2772)
			break;
		m += n;
		printf("%c", n);
	}
	printf("%c\n", (2772 - m));

	return (0);
}
