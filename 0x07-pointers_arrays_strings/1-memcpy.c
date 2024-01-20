#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to destination memory area.
 * @src: Pointer to source memory area to be copied.
 * @n: number of bytes to copy from src to dest.
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/**Initialise variables**/
	unsigned int i;

	/**Move pointer to nth element of dest**/
	while (*dest != '\0')
	{
		dest++;
	}

	/**Copy n bytes from src to dest**/
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
