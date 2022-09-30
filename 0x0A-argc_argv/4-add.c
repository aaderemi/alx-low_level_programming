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

		if (atoi(s) == 0 && (strlen(s) > 1 || (*s - '0' != 0)))
		{
			printf("Error\n");
			return (1);
		}
		ret += atoi(argv[i]);
	}
	printf("%d\n", ret);
	return (0);
}
