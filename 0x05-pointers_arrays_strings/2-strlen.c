#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s);
{
	int len;

	while(*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
