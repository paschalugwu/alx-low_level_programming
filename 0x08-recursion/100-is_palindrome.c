#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);

	while (*(s + len) != '\0')
		len++;

	return (check_palindrome(s, len - 1));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @s: The string to check
 * @len: The length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len)
{
	if (len <= 0)
		return (1);
	if (*s != *(s + len))
		return (0);

	return (check_palindrome(s + 1, len - 2));
}
