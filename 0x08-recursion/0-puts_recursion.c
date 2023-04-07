#include "main.h"

/**
  * _puts_recursion - prints each character of a string
  * @s: string
  */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}