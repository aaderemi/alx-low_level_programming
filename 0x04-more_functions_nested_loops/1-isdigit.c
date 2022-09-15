#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks if character is digit
 * @c: input
 *
 * Return: 1 if true
 */

int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
