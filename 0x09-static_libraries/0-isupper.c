#include "main.h"
/**
 *_isupper - Function to check if uppercase
 *@c : Charecter to check
 *Return: Return 0 if successful
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
return (0);
}
