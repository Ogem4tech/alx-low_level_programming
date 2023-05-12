#include <stdio.h>
#include "main.h"

/**
  *main - prints all arguments it recieves
  *@argc: number of arguments
  *@argv: list of array of arguments
  *
  *Return: 0
  */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
