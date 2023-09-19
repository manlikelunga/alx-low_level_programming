#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
