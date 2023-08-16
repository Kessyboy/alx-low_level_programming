#include "main.h"
/**
* int _islower(int c) - checks for lowercase character
* @c: parameter to be checked
* Return: 1 0r 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
