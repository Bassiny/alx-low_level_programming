#include "main.h"

/**
 *print_sign -  prints the sign of a number
 *
 *@n: is number to check
 *
 *Return: 1 is positive 0 is zero -1 is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
