#include "main.h"

/**
 * _strien - returns the length of a string
 * @s: string
 * Return: length
 */
int _strien(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
