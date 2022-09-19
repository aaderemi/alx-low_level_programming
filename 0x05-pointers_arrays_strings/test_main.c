#include "main.h"
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "Z");
	printf("%s, %ld\n", s1, strlen(s1));
	printf("%s\n", ptr);
	return (0);
}
