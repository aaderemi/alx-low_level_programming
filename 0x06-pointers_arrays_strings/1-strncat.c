#include "main.h"
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *ret;
	int i = 0;
	char *endptr;

	ret = dest;
	len = strlen(dest);

	endptr = dest + len;

	while (i < len && i < n)
	{
		*endptr++ = *src++;
		++i;
	}
	*endptr = '\0';

	return (ret);
}
