#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr)
	ptr++;

	/* Append characters from the source string to the destination string */
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the terminating null byte to the end of the concatenated string */
	*ptr = '\0';

	return (dest);
}
