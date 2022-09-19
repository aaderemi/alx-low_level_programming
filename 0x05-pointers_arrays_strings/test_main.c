#include "main.h"
#include <stdio.h>
int main(void)
{

	char str[10] = "My School";

	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);

	return (0);
}
