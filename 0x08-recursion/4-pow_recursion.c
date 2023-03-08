#include "main.h"

/**
 * _pow_recursion - Function to return the power of x by y
 * @x : Base value
 * @y : Exponent value
 * Return: 0 if success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
