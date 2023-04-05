#include "main.h"
#include <stdio.h>

/**
  * str_len - length of string
  * @s: string
  * Return: the length of a string
  */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}

/**
  * compare_chars - compares two characters
  * @s1: string 1
  * @s2: string 2
  * Return: ,
  */

int compare_chars(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
	else
	{
		return (compare_chars(s1 + 1, s2 - 1));
	}
}

/**
  * is_palindrome - check for palindrome
  * @s: a string
  * Return: 1 or 0
  */

int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len == 0 || len == 1)
	{
		return (1);
	}
	return (compare_chars(s, s + len - 1));
}
