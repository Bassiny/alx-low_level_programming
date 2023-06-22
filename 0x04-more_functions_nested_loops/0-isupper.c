#include "main.h"

/**
 * _isupper - check for uppercase character
 *
 * @c: is the character to be checker
 *
 * Return: 1 is correct or 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
