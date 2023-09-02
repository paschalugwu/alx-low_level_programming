#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 if successful, 1 if there are not enough arguments
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* Check if there are enough arguments */
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Iterate through the arguments and calculate the sum */
	for (i = 1; i < argc; i++)
	{
		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
