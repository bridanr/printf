#include "main.h"

/**
 * prt_revs - function that prints a string in reverse
 * @args: type struct va_arg where is allocated the printf arguments
 *
 * Return: the string
 */
int prt_revs(va_list args)
{

	char *s = va_arg(args, char*);
	int r;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (r = b - 1; r >= 0; r--)
		_putchar(s[r]);
	return (b);
}
