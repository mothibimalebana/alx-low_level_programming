#include "main.h"

/**
 * _memset - Function that fills memory with constant byte.
 * @s: pointer to memory location to be filled.
 * @b: constant byte to fill memory with
 * @n: number of @bs to fill @s with.
 * Return: a pointer to a char with s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**Initialize varibales**/
	unsigned int i;

	/**Iterate through memory**/
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
