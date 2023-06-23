#include "main.h"

/**
 * more_numbers - 10 times the numbers,
 * from 0 to 14
 */
void more_numbers(void)
{
	char n, N;
	char a = '1';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = '0'; n <= '9'; n++)
			_putchar(n);
		for (N = '0'; N <= '4'; N++)
		{
			_putchar(a);
			_putchar(N);
		}
		_putchar('\n');
	}
}
