#include "main.h"
/**
 * _isupper - Function
 * @c : Charecter
 * Return: Void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
