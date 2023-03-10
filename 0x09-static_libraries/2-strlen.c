#include "main.h"

/**
 * _strlen - Checks for the length of a string
 * @s : Points to the current char in an array
 * Return: 0if success
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
