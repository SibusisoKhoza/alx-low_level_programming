#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int exponent = 1, index = 0;
	
	if (!b)
		return (0);
	
	while (b[index + 1])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		index++;
	}

	while (index >= 0)
	{
		result += ((b[index] - '0') * exponent);
		exponent *= 2;
		index--;
	}
	
	return (result);
}
