#include "main.h"

/**
 * _strncpy - copys a string with n byte
 * @dest: where it copies to
 * @src: where it copies from
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
