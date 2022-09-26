#include "main.h"
#include <stdio.h>

int main(void)
{
	char buffer[98] = {0x00};
	int i = 0;

	_memset(buffer, 0x01, 95);

	for (; i < 98; i++)
	{
		printf("0x%02x ", buffer[i]);
	}
	printf("\n");

	return (0);
}
