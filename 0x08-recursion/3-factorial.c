#include "main.h"

/**
  * factorial - A function that returns the factorial of a given number
  * @n: the number to be used
  *
  * Return: n or -1 if n is less than 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
