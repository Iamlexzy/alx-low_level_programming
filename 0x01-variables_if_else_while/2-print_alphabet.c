#include <stdio.h>

/**
 * main - print alphabet in lower case followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char lcase;

	for (lcase = 'a' lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
