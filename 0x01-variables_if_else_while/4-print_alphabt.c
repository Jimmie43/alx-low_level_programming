#include <stdio.h>
/**
  *main - Entry point
  *Description: 'excluding q and e'
  *Return: always 0
  */

int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

		for (low = 'a'; low <= 'z'; low++)
		{
			if (low != e && low != q)
				putchar(low);
		}
	putchar('\n');
	return (0);
}
