#include <stdio.h>
/**
 * main -prints alphabet in lowercase, followed by a new line
 * Return: 0 upon completion
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
