#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function pointer that prints a name
 * @name: pointer to the name to be printed
 * @f: name of the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
