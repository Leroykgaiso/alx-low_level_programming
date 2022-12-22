#include <stdio.h>

/**
 *main - returns the first 100 numbers in the fibonacci sequence
 *Return:0
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d", a, b);

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %d", c);
	}

	printf("\n");

	return (0);
}
