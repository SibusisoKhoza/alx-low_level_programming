#include "main.h"
#include <stdio.h>
/**
 * puts2 - Print a string
 * @str: Input string
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
