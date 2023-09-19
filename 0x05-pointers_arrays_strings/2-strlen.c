#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 *
 *
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int length = 0;
	while (s[length])
	{
		length++;
	}
	return length;
}
