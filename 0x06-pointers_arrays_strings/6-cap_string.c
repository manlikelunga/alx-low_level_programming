#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string
 *
 * Return: A pointer to the modified string @str
 */
char *cap_string(char *str)
{
	int i = 0;
	bool capitalize = true;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize = true;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && capitalize)
		{
			str[i] = str[i] - 32;
			capitalize = false;
		}
		else
		{
			capitalize = false;
		}

		i++;
	}

	return (str);
}
