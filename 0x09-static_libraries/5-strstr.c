#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locate string
 * @haystack : String
 * @needle : String
 * Return: A string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * check - Check if str a in b
 * @a : source String
 * @b : String
 *
 * Return: Rerun
 */
int check(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
