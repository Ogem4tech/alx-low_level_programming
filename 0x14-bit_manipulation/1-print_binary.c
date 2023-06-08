#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @num: The number to be printed in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int num)
{
	if (num > 1)
		print_binary(num >> 1);
	putchar((num & 1) + '0');
}
