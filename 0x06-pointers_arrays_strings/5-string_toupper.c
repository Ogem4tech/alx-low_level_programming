#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] >= 'a' && s[l] <= 'z')
			s[l] = s[l] - 32;
	}

	return (s);
}
