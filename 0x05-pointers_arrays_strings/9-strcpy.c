#include "main.h"

/**
 * _strcpy - Copies the contents of one array to another
 * @dest: Destination array
 * @src: Source array to copy from
 *
 * Return: Pointer to the destination array
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
