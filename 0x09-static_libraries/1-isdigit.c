#include "main.h"
#include <ctype.h>

/**
 * _isdigit - cheks for a digit from 0 to 9
 * @c: the digit to be checked
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
