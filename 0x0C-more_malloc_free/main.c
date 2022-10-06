#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *concat;

	concat = _calloc(10, sizeof(char));
	printf("0x%02x\n", *concat);
	free(concat);
	return (0);
}
