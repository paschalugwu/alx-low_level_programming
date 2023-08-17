#include "main.h"
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a number
 */
void largest_prime_factor(void)
{
	long int n = 612852475143;
	long int factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", factor);
}
