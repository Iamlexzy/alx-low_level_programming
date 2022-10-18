#include <stdio.h>

/**
 * main - print alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ulc;

	for (ulc = 'a'; ulc <= 'z'; ulc++)
		putchar(ulc);
	
	for (ulc = 'A'; ulc <= 'Z'; ulc++)
		putchar(ulc);
	
	putchar('\n');
	
	return (0);
}
