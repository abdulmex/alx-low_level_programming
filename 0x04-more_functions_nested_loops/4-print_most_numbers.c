#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9 except 2 and 4
 * none
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i < 50 || i == 51 || i > 52)
			_putchar(i);
	}
	_putchar('\n');
}
