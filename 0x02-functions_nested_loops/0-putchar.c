#include<unistd.h>

/**
 * main: executes the program
 *
 * Description: Prints "_putchar" followed by a new line"
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
        write(STDOUT_FILENO, "_putchar\n", 9);
        return (0);
}
