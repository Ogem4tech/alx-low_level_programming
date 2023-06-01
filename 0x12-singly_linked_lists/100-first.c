#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints sentences before the main function is executed.
 *         This function is executed automatically before main.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
