#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase alphabet except q & e followed by a new line
 * You can only use the putchar function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
