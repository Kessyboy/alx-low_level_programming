#include <stdlib.h>
#include "lists.h"

/**
 * free_list -function parameter
 * @head: parameter
 */

void free_list(list_t *head)
{
	list_t *elem;

	while (head)
	{
		elem = head->next;
		free(elem->str);
		free(head);
		head = elem;
	}
}
