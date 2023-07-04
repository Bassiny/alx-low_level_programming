#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: the string without capitalisation
 * Return: string with capitalisation
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] == ' ')
		{
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				n[i + 1] = n[i + 1] - 32;
		}
		i++;
	}
	return (n);
}
