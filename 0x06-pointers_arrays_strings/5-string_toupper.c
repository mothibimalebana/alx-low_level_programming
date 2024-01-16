#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Function that changes lowercase letters to uppercase.
 * @: Pointer to string to be converted to uppercase.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *pStr)
{
	while (*pStr != '\0')
	{
		if (*pStr >= 'a' && *pStr <= 'z')
		{
			*pStr -= 'a' - 'A';
		}
		putchar(*pStr);
		pStr++;
	}

	return pStr;
}
