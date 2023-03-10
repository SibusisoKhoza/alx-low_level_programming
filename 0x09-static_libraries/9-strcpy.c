#include "main.h"

/**
 * *_strcpy - Copies a string
 * @dest : Pointer to a string
 * @src : Pointer to a buffer
 * Return: 0 if success
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
