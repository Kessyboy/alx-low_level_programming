#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print linked list function
 * @h: a pointer to a struct typedef to list_t
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}
