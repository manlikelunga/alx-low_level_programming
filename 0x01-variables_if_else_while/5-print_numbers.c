#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit NOs base 10 from 0 followed by a new line.
 *
 * Return: Always 0 means success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar('\n');
	}


	return (0);
}
