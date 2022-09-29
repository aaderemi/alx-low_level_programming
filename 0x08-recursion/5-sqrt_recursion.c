#include <stdlib.h>
#include <math.h>
#include "main.h"
int actual_fxn(double est, int n)
{
	double newest = 0.5 * (est + n / est);

	if (fabs(newest - est) < 0.001)
		return (newest);
	return (actual_fxn(newest, n));
}
/*
int _pow (int base, int exp)
{
	int ret = 1;

	if (exp == 0)
		return (1);
	while (exp)
	{
		ret = ret * base;
		exp--;
	}
	return (ret);
}
int estimate(int n)
{
	int evenpow = 0;
	double val = (double)n;

	while (val > 10.0)
	{
		val = val / 10.0;
		evenpow++;
	}
	if (evenpow % 2 != 0)
	{
		if (val / 10 < 1)
		{
			val = val * 10;
			evenpow--;
		}
		else
		{
			val = val / 10;
			evenpow++;
		}
	}
	if (val < 10)
		return (2 * _pow(10, evenpow / 2));
	else
		return (6 * _pow(10, evenpow / 2));
}
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
