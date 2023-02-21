#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
