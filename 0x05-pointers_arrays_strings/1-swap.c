#include <stdio.h>

/**
 * swap_int - swaps the values of two intergers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Returns: nothing
 */

void swap_in(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
