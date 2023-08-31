#include "main.h"
#include <stddef.h>

/**
 * _pow_recursion - returns the value of x exponet y
 * @x: base
 * @y: exponet
 * Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
