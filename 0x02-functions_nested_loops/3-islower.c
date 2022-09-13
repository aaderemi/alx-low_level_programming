#include <ctype.h>
/**
 * _islower - returns whether a character is lowercase
 * @c: input character
 *
 * Return: 1 if lower
 */
int _islower(int c)
{
	return (islower(c) ? 1 : 0);
}
