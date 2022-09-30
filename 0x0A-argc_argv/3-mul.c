#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments of the program and a \n
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int ret = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		ret *= atoi(argv[i]);
	printf("%d\n", ret);
	return (0);
}
