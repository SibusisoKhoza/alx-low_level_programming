#include "main.h"

int sqrt(int a, int b);

/**
 * sqrt - Evaluantes 1 to n
 * @a : Number
 * @b : Number of iterations
 * Return: On success
 */
int sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - Funtion to get the square root of n
 * @n : Number
 * Return: On success
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
