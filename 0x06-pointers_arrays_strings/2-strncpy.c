#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int s;

	s = 0;

	while (src[s] != '\0' && s < n)
	{
		dest[s] = src[s];
		s++;
	}

	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
