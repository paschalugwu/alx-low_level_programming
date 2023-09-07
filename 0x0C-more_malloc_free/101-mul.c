#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		print_error();
		return 98;
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		print_error();
		return 98;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("%d\n", result);

	return 0;
}

/**
 * is_valid_number - Check if a string contains only digits
 * @str: The input string
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return 0;
		i++;
	}

	return 1;
}

/**
 * multiply - Multiply two integers
 * @num1: The first integer
 * @num2: The second integer
 * Return: The result of the multiplication
 */
int multiply(int num1, int num2)
{
	return num1 * num2;
}

/**
 * print_error - Print "Error" followed by a new line
 */
void print_error(void)
{
	printf("Error\n");
}
