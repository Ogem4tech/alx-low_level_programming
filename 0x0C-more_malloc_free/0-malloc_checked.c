#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"


/**
  * malloc_checked - A function that allocates memory using malloc
  * @b: the number of bytes to allocate
  *
  * Return: pointer to the memory allocated
  * exit with status 98
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
