#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @num_ptr: Pointer to the number to modify.
 * @index: Index of the bit to modify.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*num_ptr &= ~(1UL << index);
	return (1);
}
