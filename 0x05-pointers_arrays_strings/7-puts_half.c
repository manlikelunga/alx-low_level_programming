#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	if (str == NULL)
		return;

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	int start = (length + 1) / 2;

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}
