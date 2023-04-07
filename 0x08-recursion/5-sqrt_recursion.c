#include "main.h"
#include <stdio.h>

/**
  * _sqrt_recursion - calculate the natural square root of n
  * @n: input number
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	root = _sqrt_recursion(n / 2);

	if (root == -1 || root * root > n)
	{
		return (-1);
	}
	if ((root + 1) * (root + 1) <= n)
	{
		return (root + 1);
	}
	return (root);
}
