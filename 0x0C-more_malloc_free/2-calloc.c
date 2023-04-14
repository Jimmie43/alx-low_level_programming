#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: new member
  * @size: the size
  * Return: p
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int j = 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	k = nmemb * size;
	p = malloc(k);
	if (p == NULL)
	{
		return (NULL);
	}
	while (j < k)
	{
		p[j] = 0;
		j++;
	}
	return (p);
}
