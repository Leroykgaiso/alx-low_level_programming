#include <stdio.h>

/**
 * main - prints the first 100 numbers in the fibonacci sequence
 * Return: 0
*/

int main(void)
{
	int a = 1;
	int b = 2;

	printf("%d\n", a);
	printf("%d\n", b);

	int sum;

	for (int i = 3; i <= 100; i++)
	{
		sum = a + b;
		printf("%d\n", sum);
		a = b;
		b = sum;
	}
	return (0);
}
