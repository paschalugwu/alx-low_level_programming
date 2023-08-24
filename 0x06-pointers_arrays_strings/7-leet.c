/* 7-leet.c */
#include "main.h"

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
