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
	int *ret = malloc((max - min + 1) * sizeof(int));

	if (min > max || ret == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		*ret = min;
		ret++;
	}
	return (ret - (max - min + 1));
}
