#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Prints charecters in the first string in the second one
 * @s : String
 * @accept : Search string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
