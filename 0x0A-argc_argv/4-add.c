#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the number of arguments of the program and a \n
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int ret = 0;

	if (argc == 1)
	{
	}
	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		int to_be_added = atoi(s);
		char str[12];

		sprintf(str, "%d", to_be_added);

		if (strlen(str) != strlen(s))
		{
			printf("Error\n");
			return (1);
		}

		if (to_be_added == 0 && (strlen(s) > 1 || (*s - '0' != 0)))
		{
			printf("Error\n");
			return (1);
		}
		ret += to_be_added;
	}
	printf("%d\n", ret);
	return (0);
}
