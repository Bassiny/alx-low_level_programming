#include "main.h"

/**
 * reverse_array - everses the content of an array
 * @a: array of number
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
