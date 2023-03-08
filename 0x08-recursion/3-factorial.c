#include "main.h"

/**
 * factorial - Function to print the factorial 
 * @n : integer
 * Return: 0 if success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
