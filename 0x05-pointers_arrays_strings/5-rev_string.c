#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints a reversed string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *i;

	int len = strlen(s);
	char *temp = s;

	printf("%d\n", len);
	for (i = (temp + len - 1); i >= temp; --i)
	{
		s = i;
		printf("%c\n", *i);
		++s;
	}
}
