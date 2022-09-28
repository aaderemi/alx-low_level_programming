#include "main.h"
/**
 * factorial - does factorial
 * @n: of n
 * Return: returns n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
