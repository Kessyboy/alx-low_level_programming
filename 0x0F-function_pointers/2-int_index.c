#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that prints a name
 * @array: a pointer to a char
 * @size: a pointer function
 * @cmp: a pointer function
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (u = 0; u < size; u++)
	{
		if (cmp(array[u]))
		{
			return (u);
		}
	}
	return (-1);
}
