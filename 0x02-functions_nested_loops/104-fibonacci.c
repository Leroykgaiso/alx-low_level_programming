#include <stdio.h>

/**
 * main - main block
 * Description: Prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int c;
	int boolean;
	long int n1;
	long int n2;
	long int fn;

	n1 = 1;
	n2 = 2;
	boolean = 1;
	printf("%ld, %ld", n1, n2);

	for (c = 0; c < 96; c++)
{
	fn = n1 + n2;
	printf(", %ld", fn);
	n1 = n2;
	n2 = fn;

	if (((n1 + n2) < 0) && boolean == 1)
	boolean = 0;
}
	printf("\n");
	return (0);
}
