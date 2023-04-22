#include <stdio.h>
/**
 * main - Prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num < 10; num++)
	{
	putchar((num % 10) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
