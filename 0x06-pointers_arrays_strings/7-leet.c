#include "main.h"

/**
 * leet - Encodes a string into "1337"
 * @str: The input string to be encoded
 *
 * Return: A pointer to the modified string @str
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}

	return (str);
}
