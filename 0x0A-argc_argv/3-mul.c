#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, y, z, len, i, digit;

	x = 0;
	y = 0;
	z = 0;
	len = 0;
	i = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (x < len && i == 0)
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			i = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			i = 0;
		}
		x++;
	}

	if (x == 0)
		return (0);

	return (z);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);

}
