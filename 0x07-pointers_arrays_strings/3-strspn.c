#include "main.h"

/**
  * _strspn - the entry point
  *@s: a pointer to the string to search
  *@accept: a pointer to acceptable characters
  *Return: 0 (success)
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
