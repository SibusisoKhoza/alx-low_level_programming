#include "main.h"

/**
 * rev_string - Takes a string and reverses it
 * @s : Input string
 */
void rev_string(char *s)
{
	int i, j;
	char r[1000];


	i = j = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
