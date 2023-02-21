#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		_putchar(*c);
		c++;
	}

	return (0);
}
