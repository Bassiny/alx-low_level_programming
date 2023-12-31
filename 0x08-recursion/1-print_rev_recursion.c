#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
