#include <stdio.h>
/**
 * main - prints every possible combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 27; num < 37; num++)
	{
	putchar(num);
	}
	if (num != 36)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}

