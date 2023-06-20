#include <stdio.h>

/**
 * main - print combinaison
 *
 * Return: Always 0 (Seccuss)
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y > i)
			{
				putchar(i + '0');
				putchar(y + '0');
				if (i != 8 || y != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
