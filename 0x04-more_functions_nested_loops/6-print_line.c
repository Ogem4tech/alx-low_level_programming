#include "main.h"

/**
  * print_line - Draw a number of line in the terminal
  * @n: the number of times
  *
  * Return: 0
  */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

