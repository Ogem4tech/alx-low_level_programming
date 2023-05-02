#include "main.h"

/**
  * swap_int - this function swaps the values of two integers
  * @a: the first integer to be swapped
  * @b: the second integer to be swapped
  *
  * Return: Always 0
  */
void swap_int(int *a, int *b)
/* the function that swaps the two values from the integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
