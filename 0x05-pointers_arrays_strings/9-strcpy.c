#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return (NULL);

	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
