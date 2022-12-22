#include "main.h"

/**
 * _print_triangle - prints a triangle made of # characters
 * @size: the number of lines in the triangle
 * Return: void
 */
void _print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
		_putchar(' ');
		for (j--; j < size; j++)
		_putchar(35);
		if (i < (size - 1))
		_putchar('\n');
	}
	_putchar('\n');
}
