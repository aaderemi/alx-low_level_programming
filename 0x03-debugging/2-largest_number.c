#include "main.h"

/**
 * largest_number - returns max val of 3 nums
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
		largest = c;

	return (largest);
}
