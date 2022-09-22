#include "main.h"
#include "ctype.h"

/**
 * leet - replaces characters with weird stuff.
 * @str: characters from string str are to be replaced
 * Return: string with replacement.
 */
char *leet(char *str)
{
	char *ret = str;
	char letters[] = {'A', 'E', 'L', 'T', 'O'};
	char map[] = {'4', '3', '1', '7', '0'};

	while (*str)
	{
		int i;

		for (i = 0; i < 5; i++)
		{
			if (toupper(*str) == letters[i])
				*str = map[i];
		}
		str++;
	}

	return (ret);
}
