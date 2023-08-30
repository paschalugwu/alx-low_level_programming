#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_palindrome(s, s));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome
 * @start: The starting address of the string
 * @end: The ending address of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (check_palindrome(start + 1, end - 1));
}
