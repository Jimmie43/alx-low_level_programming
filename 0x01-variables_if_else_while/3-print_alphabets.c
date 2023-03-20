#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print alphabet in lowercase and uppercase'
  *Return: always 0
  */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
