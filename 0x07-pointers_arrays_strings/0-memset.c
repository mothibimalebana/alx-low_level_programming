#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to a to memory area.
 * @b: constant byte to fill memory with.
 * @n: number of bytes to fill memory area with.
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**Initialise variables**/
	unsigned int i;

	/**Iterate through memory area b**/
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
