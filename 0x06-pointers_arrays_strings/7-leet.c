#include "main.h"

/**
 * leet - Convert characters in a string to leet (1337) language.
 * @str: The input string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = "aeotlAEOTL";
	char leet_replacements[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_chars[j]; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j / 2];
				break;
			}
		}
	}

	return (str);
}
