#include <stdlib.h>
#include "main.h"
/**
 * array_range - python like range
 * @min: min val
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	{
		int *ret = malloc((max - min + 1) * sizeof(int));
		int *init = ret;

		if (ret == NULL)
		{
			free(ret);
			return (NULL);
		}
		for (; min <= max; min++)
		{
			*ret = min;
			ret++;
		}
		return (init);
	}
}
