#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			_putchar('F');
		else if (i % 3 == 0)
			_putchar('F');
		else if (i % 5 == 0)
			_putchar('B');
		else
		{
			int num = i;

			while (num > 0)
			{
				_putchar(num % 10 + '0');
				num /= 10;
			}
		}

		if (i < 100)
			_putchar(' ');

		if (i == 100)
			_putchar('\n');
	}

	return (0);
}
