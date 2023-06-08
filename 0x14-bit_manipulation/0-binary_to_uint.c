#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = num * 2 + (*b - '0');
	}
	return (num);
}
