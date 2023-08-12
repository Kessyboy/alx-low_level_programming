#include <stdio.h>
/**
* main -Entrt point
*
* Return: always 0 (Success)
*/

int main(void)
{
int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
