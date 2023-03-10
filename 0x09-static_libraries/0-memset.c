#include "main.h"
/**
 *_memset - Function
 *@s : Target string
 *@b : Charecter
 *@n : Number
 *Return: Returns value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
