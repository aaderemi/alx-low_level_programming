#include "main.h"
#include <stdlib.h>
#include <math.h>
int _sqrt(int n);
int sqrt_fxn(double est, int n);

/**
 * actual_fxn - tests if n is prime
 * @n: num totest
 * @factor: 2 is default
 * @root: sqrt(n)
 * Return: 1 or 0
 */
int actual_fxn(int n, int factor, int root)
{

	if (n != factor && n % factor == 0)
		return (0);
	if (factor <= root)
	{
		factor++;
		return (actual_fxn(n, factor, root));
	}
	return (1);
}
/**
 * sqrt_fxn - does sqrt
 * @est: init est
 * @n: num of int
 * Return: sqrt(n)
 */
int sqrt_fxn(double est, int n)
{
	double newest = 0.5 * (est + n / est);

	if (fabs(newest - est) < 0.001)
		return (newest);
	return (sqrt_fxn(newest, n));
}
/**
 * _sqrt - wraper fxn for sqrt
 * @n: same as above
 * Return: same as above
 */
int _sqrt(int n)
{
	return (sqrt_fxn(10, n));
}
/**
 * is_prime_number - wrapper for is prime
 * @n: number to test
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_fxn(n, 2, _sqrt(n)));
}
