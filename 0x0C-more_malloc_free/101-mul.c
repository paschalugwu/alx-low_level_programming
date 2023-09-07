#include <stdlib.h>
#include "main.h"

/**
 * mul - Multiply two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: The product of num1 and num2
 */
int mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k, carry, n1, n2, sum, *result;

	len1 = str_len(num1);
	len2 = str_len(num2);

	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		exit(1);
	for (i = 0; i < (len1 + len2); i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}
	k = 0;
	while (result[k] == 0 && k < (len1 + len2))
		k++;
	if (k < (len1 + len2))
	{
		for (; k < (len1 + len2); k++)
			_putchar(result[k] + '0');
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * str_len - Calculate the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len])
	len++;

	return (len);
}
