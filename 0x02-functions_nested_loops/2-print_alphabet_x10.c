#include "main.h"
/**
 * print_alphabet_x10 - Function that prints the alphabet 10x in lowercase.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int counter;

	counter = 0;

	while (counter < 10)
	{
		char i = 'a';

		for (; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		counter++;
	}
}
