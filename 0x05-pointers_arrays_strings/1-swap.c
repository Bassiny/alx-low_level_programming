#include "main.h"

/**
 * swap_int - switch the value of the integer
 *
 * @a: first integer
 * @b: the scound integer
 *
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int y = *b;

	*b = i;
	*a = y;
}
