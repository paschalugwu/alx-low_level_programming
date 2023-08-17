#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 *
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	if (a >= b && a >= c)
		return (a);
	else if (b >= a && b >= c)
		return (b);
	else
		return (c);
}
