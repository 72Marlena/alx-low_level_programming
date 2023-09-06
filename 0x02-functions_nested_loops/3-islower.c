#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase letter or character
 * @c: the char to check
 * Return: 1 if is lowercase, 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
