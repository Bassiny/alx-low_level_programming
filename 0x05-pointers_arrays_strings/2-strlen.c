#include "main.h"

/**
 * _strlen - function that return the lenght of string
 *
 * @s: the string
 *
 * Return: the lenght of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
