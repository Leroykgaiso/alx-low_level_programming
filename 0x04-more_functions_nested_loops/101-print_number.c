#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints an integer to the standard output
 * @n: the integer to be printed
 */
void print_numbers(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
