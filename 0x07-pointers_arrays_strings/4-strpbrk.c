#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - the entry point
  *@s: a pointer to the string to search
  *@accept: a pointer to the set of acceptable characters
  *Return: 0 success
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
