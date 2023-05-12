#include <stdio.h>
#include "main.h"

/**
  *main - prints program name, followed by a new line
  *@argc: number of arguments
  *@argv: lists array of arguments
  *
  *Return: 0
  */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
