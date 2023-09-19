#include <stdio.h>
#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 * main - Entry point of the program.
 *
 *
 *
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
