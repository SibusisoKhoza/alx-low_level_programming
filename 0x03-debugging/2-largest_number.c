#include "main.h"

/**
 * largest_number - Return the biggest number
 * @a : First number
 * @b : Second number
 * @c : Third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{

  int largest;

  if (a > b && a > c)
  {
  largest = a;
  }
  else if (b > c)
  {
  largest = b;
  }
  else
  {
  largest = c;
  }

return (largest);
}
