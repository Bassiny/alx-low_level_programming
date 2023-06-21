#include <stdio.h>

/**
 * print_alphabet - alphabet in one line
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
