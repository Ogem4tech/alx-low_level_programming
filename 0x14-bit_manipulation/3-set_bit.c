#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @num_ptr: Pointer to the number.
 * @index: Index, starting from 0, of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*num_ptr |= (1 << index);
	return (1);
}