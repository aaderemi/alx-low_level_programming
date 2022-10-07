#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int *concat;

	concat = _calloc(5, 0);
	printf("0x%02x\n", *concat);
	free(concat);
	return (0);
}
