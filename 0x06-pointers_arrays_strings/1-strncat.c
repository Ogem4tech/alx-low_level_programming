#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, j;

	l = 0;
	j = 0;

	while (dest[l] != '\0')
		l++;

	while (src[j] != '\0' && j < n)
	{
		dest[l] = src[j];
		l++;
		j++;
	}

	dest[l] = '\0';

	return (dest);
}
