#include "main.h"
/**
 * _strspn - Function that gets length of prefix substring.
 * @s: Pointer to string.
 * @accept: Pattern.
 *
 * Return: Returns number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	/**Initialise variables**/
	int i;
	int j;
	int z;

	/**Iterate through string**/
	z = 0;
	for (i = 0; s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				z++;
			}
		}
	}
	return (z);

}
