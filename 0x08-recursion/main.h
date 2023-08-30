#ifndef MAIN_H
#define MAIN_H

/* Prototype to print a string, followed by a new line. */
void _puts_recursion(char *s);
int _putchar(char c);
/* Prototype to prints a string in reverse. */
void _print_rev_recursion(char *s);
/* Prototype that returns the length of a string. */
int _strlen_recursion(char *s);
/* Prototype that returns the factorial of a given number. */
int factorial(int n);
/* Prototype that returns the value of x raised to the power of y. */
int _pow_recursion(int x, int y);
/* Prototype that returns the natural square root of a number. */
int _sqrt_recursion(int n);
int sqrt_helper(int n, int i);

#endif /* MAIN_H */