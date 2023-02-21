#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase, followed by a new line
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
