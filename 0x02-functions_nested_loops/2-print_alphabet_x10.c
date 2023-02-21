#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 void print_alphabet_x10(void)
{
	int c, j;

	j = 0;

	while (j < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		j++;
		_putchar('\n');
	}
}
