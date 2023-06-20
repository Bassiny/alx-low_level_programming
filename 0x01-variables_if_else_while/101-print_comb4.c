#include <stdio.h>

/**
 * main - combinaison of three number
 *
 * Return: Always 0 (Seccuss)
 */
int main(void)
{
	int i, y, z;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (z > y && z > i && y > i)
				{
					putchar(i + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (i != 7 || y != 8 || z != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

