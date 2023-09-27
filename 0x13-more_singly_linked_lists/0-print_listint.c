#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint - function
* @h:  argument
* Return: returns sum
*
*/

size_t print_listint(const listint_t *h)
{
	int elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elem += 1;

		h = h->next;
	}
	return (elem);
}
