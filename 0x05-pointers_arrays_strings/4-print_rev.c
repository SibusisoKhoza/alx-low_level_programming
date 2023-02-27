#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string and a new line
 * @s : String to input
 */
void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		putchar(*(s + (count)));
	}
	putchar('\n');
}
