#include "main.h"
/**
 * _strchr - Prints from first char encountered
 * @s : String
 * @c : Char
 * Return: A string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
