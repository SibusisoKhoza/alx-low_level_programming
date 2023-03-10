#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1 : String one
 * @s2 : String two
 * Return: A pointer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int s = 0;

	while (s1[i] != 0 && s2[i] != 0)
	{
		s = s1[i] - s2[i];
		if (s != 0)
			break;
		i++;
	}

	return (s);
}
