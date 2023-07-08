#include "main.h"

/**
 * print_to_98 - prints all numbers for n to 98
 * @n: the integer used as the starting point
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if ((i / 10) != 0)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
}
