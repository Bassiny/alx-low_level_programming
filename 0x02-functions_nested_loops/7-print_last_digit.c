#include "main.h"

/**
 * print_last_digit - the last digit of a number
 *
 * @n: the number
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int r;
	char lastDigit;

	if (n < 0)
		n = n * (-1);
	r = n % 10;
	lastDigit = '0' + r;
	_putchar (lastDigit);
	return (r);
}
