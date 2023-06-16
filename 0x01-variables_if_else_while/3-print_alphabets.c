#include <stdio.h>

/**
 * main - alphabet in one line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mletter = 'a';
	char Mletter = 'A';

	while (mletter <= 'z')
	{
		putchar(mletter);
		mletter++;
	}
	while (Mletter <= 'Z')
	{
		putchar(Mletter);
		Mletter++;
	}
	putchar('\n');
	return (0);
}
