#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node -  add node
 * @head: double pointer
 * @str: a pointer to a string
 * Return: return a pointer to a struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstnode;
	unsigned int i, count = 0;

	firstnode = malloc(sizeof(list_t));
	if (firstnode == NULL)
		return (NULL);

	firstnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	firstnode->len = count;
	firstnode->next = *head;
	*head = firstnode;

	return (*head);
}
