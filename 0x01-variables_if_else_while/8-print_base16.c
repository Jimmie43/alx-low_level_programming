#include <stdio.h>
/**
  *main - Entry point
  *Description: 'hexadecimal'
  *Return: always 0
  */

int main(void)

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
