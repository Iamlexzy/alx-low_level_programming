#include "main.h"

/**
 * print_line - prints a straight lin using '_'
 * @n: number of '_' to be printed
 */
void print_line(int n)
{
	int ln;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}

	_putchar('\n');
}
