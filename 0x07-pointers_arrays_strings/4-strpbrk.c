#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept:  input
 * Return: Accept  0 (success)
 */

char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
