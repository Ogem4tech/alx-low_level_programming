#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, z, l = 0, r = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		l += *(a + z);
	}
	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		r += *(a + z);
	}
	printf("%i, %i\n", l, r);
}
