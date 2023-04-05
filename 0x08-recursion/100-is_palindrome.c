#include "main.h"
#include <stdio.h>

/**
  * is_palindrome - check whether a string is a palindrome
  * @s: string length
  * return: 0
  */

int str_len(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return len;
}

int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len == 0 || len == 1)
	{
		return 1;
	}
	if (*s != *(s+len-1))
	{
		return 0;
	}
	return is_palindrome(s+1);
}
