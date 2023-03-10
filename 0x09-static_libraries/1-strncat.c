#include "main.h"
/**
 * _strncat - Concatenate two strings
 * @dest : Destination string
 * @src: Source string
 * @n : limit
 * Return: 0 if success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + j) != 0)
	{
		*(dest + i + j)	= *(src + j);
		if (j >= n)
			break;
		j++;
	}

	*(dest + i + j) = 0;
	return (dest);
}
