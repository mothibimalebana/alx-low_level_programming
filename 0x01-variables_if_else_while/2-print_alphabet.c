#include <stdio.h>
/**
 * main - starting point for program exectuion.
 * @void: main function has n parameters.
 * Return: 0 (Success)
 * Description: function prints alphabet followed by new line.
 */

int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet++);
		putchar('\n');
	}
	return (0);
}
