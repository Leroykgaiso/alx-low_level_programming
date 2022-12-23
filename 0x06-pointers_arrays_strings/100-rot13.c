#include "main.h"
#include <stdio.h>

/**
 * rot13 - apply the ROT13 substitution cipher to a string
 * @s: the string to be modified
 *
 * Return: the modified string
 */
char *rot13(char *s)
{
	int a = 0;

	while (s[a])
	{
		if ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] -= 13;
			}
			else
			{
				s[a] += 13;
			}
		}
		a++;
	}

	return (s);
}
