file: print_bin.c

#include "main.h"

/**
 * prt_bin - prints binary integer
 * @val: parameter
 * Return: integer
 */

int prt_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int r, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int k;

	for (r = 0; r < 32; r++)
	{
		k = ((a << (31 - r)) & num);
		if (k >> (31 - r))
			flag = 1;
		if (flag)
		{
			b = k >> (31 - r);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
