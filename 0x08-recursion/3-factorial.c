#include <stdio.h>
#include "main.h"

/**
 * factorial - it calculates factorial of a given number
 * @n: the number
 * Return: intiger
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
