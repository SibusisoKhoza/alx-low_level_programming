#include "main.h"
/**
 * _memset - Puts a constant byte in memory
 * @s : String
 * @b : Byte
 * @n : Length of the buffer
 * Return: A string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
