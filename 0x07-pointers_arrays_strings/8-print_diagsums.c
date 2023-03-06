#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints sum of diagonals of the matrix
 * @a : Pointer an int
 * @size : Size of the array
 * Return: Rertuns void
 */
void print_diagsums(int *a, int size)
{
	int i, j, a = 0, b = 0, r1, r2;

	for (i = 0; i <= (size - 1); i++)
	{
		r1 =  (size + 1) * i;
		a = a + *(a + r1);
	}

	for (j = 1; j <= size; j++)
	{
		r2 = (size - 1) * j;
		b = b + *(a + r2);
	}
	printf("%d, %d\n", a, b);
}
