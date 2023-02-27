#include <stdio.h>
#include "main.h"
/**
 * print_array - Print an arrau n number of times
 * @a : Pointer to an array
 * @n : Number of elements  to iterate throgh an array
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}
