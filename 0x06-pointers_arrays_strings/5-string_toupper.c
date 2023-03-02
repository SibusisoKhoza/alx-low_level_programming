#include "main.h"
/**
 * string_toupper - Function to convert to upper string
 * @s : String
 * Return: 0 if success
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = 'A' + (s[i] - 'a');
		}
		i++;
	}
	return (s);
}
