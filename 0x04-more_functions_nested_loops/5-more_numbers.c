#include "main.h"

/**
 * more_numbers - Main function
 * Return: NOthing
 */

void more_numbers(void)
{
	int n, units, tens, row;

	for (row = 1; row <= 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			tens = n / 10;
			units = n % 10;
			if (n > 9)
				_putchar(tens + '0');

			_putchar(units + '0');
		}
		_putchar('\n');
	}
}
