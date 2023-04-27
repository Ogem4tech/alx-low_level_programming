#include "main.h"

/**
  * _isdigit - Check if it is a digit
  * @c: The character to check
  * Return: 1 for digit 0 for otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
