#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case and a new line
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		_putchar(lc);

	_putchar('\n');
}
