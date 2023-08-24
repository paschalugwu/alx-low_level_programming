#include "main.h"

/* Define the magic_function */
void magic_function(int *p)
{
	/* To remove the unused parameter warning */
	(void)p;
	/* Your magical code here */
	*(p + 5) = 98;
}
