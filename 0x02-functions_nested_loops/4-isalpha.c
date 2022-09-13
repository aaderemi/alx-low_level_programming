#include <ctype.h>
/**
 * _isalpha - returns whether a character is lowercase
 * @c: input character
 *
 * Return: 1 if lower
 */
int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
