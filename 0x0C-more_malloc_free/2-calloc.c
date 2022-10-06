#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates stuff
 * @nmemb: number  of stuffs
 * @size: size of each
 * Return: pointer to return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret = malloc(nmemb * size);

	if (!nmemb || !size || !ret)
		return (NULL);

	memset(ret, 0, nmemb * size);
	return (ret);
}
