#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int *concat;

	concat = array_range(13, 10);
	printf("0x%02x\n", *concat);
	free(concat);
	return (0);
}
