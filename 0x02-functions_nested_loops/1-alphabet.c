#include "main.h"
/**
 * print_alphabet - Prints letter of alphabet in order.
 *
 * Return: Returns letter of alphabet.
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
