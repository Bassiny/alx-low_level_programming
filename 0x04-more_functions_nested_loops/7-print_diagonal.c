#include "main.h"

/**
 * print_diagonal - draws a straight line
 *
 * @n: is number the _
 *
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; (i < n) && n != 0; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
