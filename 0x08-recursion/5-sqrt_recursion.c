#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * actual_fxn - does the sqrt. i used a lazy reqmt
 * @est: initial estimate
 * @n: number for which we need sqrt
 * Return: sqrt(n)
 */
int actual_fxn(double est, int n)
{
	double newest = 0.5 * (est + n / est);

	if (fabs(newest - est) < 0.001)
		return (newest);
	return (actual_fxn(newest, n));
}
/**
 * _sqrt_recursion - wraper fxn for sqrt
 * @n: same as above
 * Return: same as above
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (actual_fxn(10, n) * actual_fxn(10, n) != n)
		return (-1);
	else
		return (actual_fxn(10, n));
}
