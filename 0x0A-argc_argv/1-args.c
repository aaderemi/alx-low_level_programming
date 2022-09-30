#include <stdio.h>
/**
 * main - prints the number of arguments of the program and a \n
 * @argc: num of arguments
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
