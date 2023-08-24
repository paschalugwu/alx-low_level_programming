#include "main.h"

/**
 * rot13 - Encode a string using rot13
 * @s: The input string
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *s)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyizABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
