#include "main.h"

/**
  *_puts - function that prints a string
  *@str:- pointer to the string
  *Return: String and new line
  */
void _puts(char *str)
{
	int s = 0;
		while (str[s])
		{
			_putchar(str[s]);
			s++;
		}
	_putchar ('\n');
}
