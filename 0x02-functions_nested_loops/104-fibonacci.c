#include <stdio.h>

/**
 * main - Main entry
 *
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, c = 0, d = 2;
	unsigned long int x, y, z;
	int count;

	printf("%lu, %lu, ", b, d);
	for (count = 2; count < 98; count++)
	{
		if (b + d > 10000000000 || c > 0 || a > 0)
		{
			x = (b + d) / 10000000000;
			y = (b + d) % 10000000000;
			z = a + c + x;
			a = c, c = z;
			b = d, d = y;
			printf("%lu%010lu", c, d);
		}
		else
		{
			y = b + d;
			b = d, d = y;
			printf("%lu", d);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
