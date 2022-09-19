#include "main.h"
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[5] = {'H', 'H', 'H', 'H'};
	char *ptr;

	printf("%s\n", s1);
	ptr = _strcpy(s1, "Z");
	printf("%s, %ld\n", s1, strlen(s1));
	printf("%s\n", ptr);
	return (0);
}
