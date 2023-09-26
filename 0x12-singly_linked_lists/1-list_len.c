#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - linked list function
 * @h: a pointer to a struct typedef to list_t
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
