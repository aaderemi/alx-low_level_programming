#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints a reversed string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;

	int len = strlen(s);

	for (i = 0; i < len / 2; ++i)
	{
		char tmp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
