#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function to find a a location of substring
 * @haystack : String
 * @needle : String
 * Return: A string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, check;

	i = 0;
	j = 0;
	done = 0;
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			done = 1;
			j++;

		}
		else
		{
			done = 0;
			j = 0;
		}

		if (needle[j] == '\0' && check == 1)
			return ((haystack + i - j + 1));
		else if (needle[j] == '\0' && check == 0)
			return (haystack);
		i++;
	}

	return (NULL);
}
