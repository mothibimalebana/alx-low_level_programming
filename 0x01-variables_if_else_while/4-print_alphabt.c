#include <stdio.h>
/**
 * main - starting point for program execution.
 * @void: main function has no parameters.
 * Return: main function has no return value.
 * Description: Prints all the letters of the alphabet except q and e.
 */
int main(void)
{
	char st = 'a';


	while (st <= 'z')
	{
		if (st != 'e' && st != 'q')
			putchar(st);
		st++;
	}
	putchar('\n');

	return (0);
}
