#include "main.h"

/**
 * print_rev - orint the sting in reverse
 *
 * @s: is the string
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
