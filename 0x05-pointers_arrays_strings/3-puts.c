#include "main.h"

/**
 * _puts - display the string of char
 *
 * @str: string of chara
 *
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
