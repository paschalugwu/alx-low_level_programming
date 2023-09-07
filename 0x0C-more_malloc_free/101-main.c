#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	unsigned long long int result;

	result = mul(10, 98);
	printf("%llu\n", result);

	result = mul(235234693269436436ULL, 286580343650843650ULL);
	printf("%llu\n", result);

	return (0);
}
