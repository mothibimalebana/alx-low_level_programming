#include <stdio.h>
/**
 * main - starting point for program execution.
 * @void: main function takes no parameters.
 * Return: 0 (success)
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
