#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks upper case
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
