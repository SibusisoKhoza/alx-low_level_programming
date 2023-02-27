#include "main.h"

/**
 * swap_int - takes two pointers and swap their values
 * @a : First value
 * @b : Second value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
