#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: nomber the charchter to add
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	/* Move the pointer to the end of the destination string */
	while (*ptr)
	ptr++;

	/* Append characters from the source string to the destination string */
	i = 0;
	while (*src && i < n)
	{
		*ptr = *src;
		i++;
		ptr++;
		src++;
	}

	/* Add the terminating null byte to the end of the concatenated string */
	*ptr = '\0';

	return (dest);
}
