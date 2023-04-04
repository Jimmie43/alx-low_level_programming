#include "main.h"

/**
  * _memset - the entry point
  * @s: memory area pointer
  * @b: the constant byte
  * @n: bytes
  * Return: 0 (success)
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
