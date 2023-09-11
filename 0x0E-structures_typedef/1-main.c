#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * This program demonstrates the usage of the 'init_dog' function defined
 * in the "dog.h" header file. It creates a dog structure, initializes its
 * members using 'init_dog', and then prints the information of the dog.
 * The program showcases the successful completion of the task by correctly
 * initializing and displaying the dog's information.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Buddy", 5, "John Doe");

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return (0);
}
