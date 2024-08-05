#include "main.h"

/**
 * prt_c - prints a character
 * @val: arguments
 * Return: integer
 */
int prt_c(va_list val)
{
	char r;

	r = va_arg(val, int);
	_putchar(r);
	return (1);
}
