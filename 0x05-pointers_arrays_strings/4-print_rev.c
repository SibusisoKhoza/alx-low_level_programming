#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string and a new line
 * @s : String to input
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		putchar(s[i--]);
	}
	putchar('\n');
}
