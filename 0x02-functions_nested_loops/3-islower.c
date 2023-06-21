#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character to be checked
 *
 * Return: 1 if correct or 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
