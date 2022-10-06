#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - does malloc and checks
 * @b: size variable
 * Return: pointer to void or 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p)
	{
		return (p);
	}
	else
		exit(98);
}
