#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "", 2);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
