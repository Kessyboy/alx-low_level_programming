#include <stdlib.h>
#include "lists.h"

/**
 * free_list -function parameter
 * @head: parameter
 * Return:(0)Always
 */

void free_list(list_t *head)
{
	list_t *prep;

	while (head)
	{
		prep = head->next;
		free(prep->str);
		free(head);
		head = prep;
	}
}
