#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicate a string
* @str: the string to be dupicated
* Return: the string duplicated
*/

char *_strdup(char *str)
{
	int i;
	char *dup;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	dup = malloc(sizeof(char) * count + 1);

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	return (dup);
}
