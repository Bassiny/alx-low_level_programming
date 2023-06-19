#include <stdio.h>

/**
 * main - number in Hexadecimal
 *
 * Return: Always 0 (Seccuss)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
