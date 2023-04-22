#include <stdio.h>

/**
 * main - print the alphabet in reverse form
 * Return: Always 0
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}

