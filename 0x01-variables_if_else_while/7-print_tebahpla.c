#include <stdio.h>
/**
 * main - starting point for program execution.
 * @void: main function takes no parameters.
 * Return: 0 (success)
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
		putchar(ch--);

	putchar('\n');

	return (0);
}
