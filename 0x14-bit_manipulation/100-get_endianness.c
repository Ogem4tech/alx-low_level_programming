#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *) &x;

	return (*c);
}
