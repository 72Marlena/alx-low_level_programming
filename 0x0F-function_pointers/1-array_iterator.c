#include "function_pointers.h"

/**
 * array_iterator -excts a fun given as ptr on each elem of an []
 * @array: pointer to the ptr
 * @size: sizeof an array
 * @action: ponter to the fun
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size ; i++)
		action(array[i]);

}
