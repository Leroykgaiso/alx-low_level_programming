#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer parameter
 */
void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar('-');
		numb = -num;
		{
		if (numb > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
		}
}
