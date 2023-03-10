#include "main.h"
/**
 * _strncpy - Concatenate 2 strings
 * @dest : Destination
 * @src : Source
 * @n : n to copy
 * Return: Pointer to a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}


	return (dest);
}
