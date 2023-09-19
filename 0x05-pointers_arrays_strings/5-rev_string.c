#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;
	int length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
