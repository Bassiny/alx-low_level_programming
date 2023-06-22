#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * @c: the digit to be in check
 *
 * Return: 1 if correct or 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
