#include "main.h"

/**
 * length - Function to find the length
 * @s : String
 * Return: 0 if success
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}
/**
 * check - Function to check
 * @s : String
 * @l : Length
 * @i: Array index
 * Return: 0 if success
 */
int check(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check(s, l, i + 1));
	return (0);
}
/**
 * is_palindrome - Function to check if palindrome
 * @s : String
 * Return: 1 if success
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = length(s);

	return (check(s, l, i));
}
