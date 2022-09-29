#include "main.h"
#include <stdlib.h>
#include <math.h>
int actual_fxn(int n, int factor)
{
	int root = (int)sqrt(n);

	if (n != factor && n % factor == 0)
		return 0;
	if (factor <= root)
	{
		factor++;
		return (actual_fxn(n, factor));
	}
	return (1);
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_fxn(n, 2));
}
