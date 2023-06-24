#include "main.h"

/**
 * _abs - the absolute value of an integer
 *
 * @n: the integer
 *
 * Return: the integer
 */
int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = n * (-1);
		return (r);
	}
	else
		return (n);
}
