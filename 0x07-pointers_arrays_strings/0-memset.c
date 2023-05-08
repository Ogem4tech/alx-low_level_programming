#include "main.h"

/**
  *_memset - fills meory with a constant byte
  *@s: memory area to be filled
  *@b: character to copy
  *@n: number of times to copy b
  *
  *Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
