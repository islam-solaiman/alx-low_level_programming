#include <stdio.h>

void firs(void) __attribute__ ((constructor));

/**
 * first -  function that prints sintence before the main function is executed.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}