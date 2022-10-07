#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *concat;

	concat = string_nconcat(NULL, NULL, 0);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
