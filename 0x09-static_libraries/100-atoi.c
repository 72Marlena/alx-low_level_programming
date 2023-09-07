#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: params
 * Return: void
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, m = 0, k = 1, p = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			k *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				p *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		m = m + ((*(s + i) - 48) * p);
		p /= 10;
	}
	return (m * k);
}
