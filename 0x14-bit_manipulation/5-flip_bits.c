#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 *
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The number of bits to flip to get from num1 to num2.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int count = 0;
	unsigned long int xor_result = num1 ^ num2;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
