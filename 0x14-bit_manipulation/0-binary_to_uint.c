#include "main.h"
#include <stdio.h>

/**
 * convert_binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_string: Pointer to a string containing binary digits (0 and 1).
 *
 * Return: The converted unsigned int number.
 */
unsigned int convert_binary_to_uint(const char *binary_string)
{
	unsigned int result = 0;

	if (binary_string == NULL)
		return (0);

	for (; *binary_string; binary_string++)
	{
		if (*binary_string != '0' && *binary_string != '1')
			return (0);

		result = result * 2 + (*binary_string - '0');
	}

	return (result);
}

