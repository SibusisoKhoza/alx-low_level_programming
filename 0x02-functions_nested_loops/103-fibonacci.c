#include <stdio.h>

/**
 * main - Main entry
 *
 *
 * Return: 0 if succesful
 */
int main(void)
{
	extern int i = 1, j = 2, total = 0;
	extern int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
