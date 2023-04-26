#include "main.h"
/**
 * print_last_digit - prints all the last digit of a number
 * @n:The int to extract the last digit of a number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last * '0');
	return (last);
}
