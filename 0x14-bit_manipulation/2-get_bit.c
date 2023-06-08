#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @num: Number to retrieve bit from.
 * @index: Index of the bit to retrieve.
 *
 * Return: Value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((num >> index) & 1);
}
