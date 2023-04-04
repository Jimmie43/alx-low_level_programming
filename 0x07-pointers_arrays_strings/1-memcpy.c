#include "main.h"

/**
  * _memcpy - the entry point
  * @dest: pointer to destination
  * @src: pointer to the source
  * @n: number of bytes to copy
  * Return: 0 (success)
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
