#include <stdio.h>
/**
 * main - starting point of program execution
 * @void: main function has no parameters.
 * Return: 0 (Success)
 */
int main(void)
{
	char sC = 'a';
	char uC = 'A';

	while (sC <= 'z')
	{
		putchar(sC++);
		putchar('\n');
	}
	while (uC <= 'Z')
	{
		putchar(uC++);
		putchar('\n');
	}
	return (0);
}
