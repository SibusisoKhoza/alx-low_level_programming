#include "main.h"

int prime(int a, int b);

/**
 * prime - Makes possible to evaluate from 1 to n
 * @a : Number
 * @b : Iterations from 1 to n
 * Return: 0 if success
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - Function to check for prime
 * @n : Number
 * Return: 0 if success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
