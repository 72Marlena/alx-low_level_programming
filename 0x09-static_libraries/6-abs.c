#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer
 * @j: digit
 *
 * Return: 0
 */

int _abs(int j)
{

	if (j < 0)
		return (-j);
	else if (j == 0)
		return (0);
	else
		return (j);
}
