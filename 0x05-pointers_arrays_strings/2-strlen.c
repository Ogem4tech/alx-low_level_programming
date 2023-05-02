#include "main.h"

/**
  * _strlen - the function that returns the length of a string
  * @s: the string from where the length is gotten
  *
  * Return: the length of the string
  */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
