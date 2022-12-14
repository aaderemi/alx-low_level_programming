#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates stuff
 * @nmemb: number  of stuffs
 * @size: size of each
 * Return: pointer to return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (!nmemb || !size)
		return (NULL);
	{
		void *ret = malloc(nmemb * size);

		if (!nmemb || !size || !ret)
			return (NULL);
		memset(ret, 0, nmemb * size);
		return (ret);
	}
}
