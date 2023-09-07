#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	result = mul(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}

/**
 * is_number - Check if a string is a valid number
 * @str: The string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
