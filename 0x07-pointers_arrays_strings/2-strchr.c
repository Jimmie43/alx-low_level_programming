#include "main.h"
#include <stdio.h>

/**
  * _strchr - the entry point
  * @s: pointer to the string
  * @c: character to locate
  * Return: 0 (success)
  */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
