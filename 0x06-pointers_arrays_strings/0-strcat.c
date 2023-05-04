#include "main.h"

/**
  *_strcat - function that concatenates two strings
  *@dest: destination string pointer
  *@src: source string pointer
  *Return: pointer to destination string
  */
char *_strcat(char *dest, char *src)
{
	int length_of_string, l;

	length_of_string = 0;

	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (l = 0; src[l] != '\0'; l++, length_of_string++)
	{
		dest[length_of_string] = src[l];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
