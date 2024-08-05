#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", prt_s}, {"%c", prt_c},
		{"%%", print_37},
		{"%i", prt_i}, {"%d", prt_d}, {"%r", prt_revs},
		{"%R", prt_rot13}, {"%b", prt_bin},
		{"%u", prt_unsigned},
		{"%o", prt_oct}, {"%x", prt_hex}, {"%X", prt_HEX},
		{"%S", prt_exc_str}, {"%p", prt_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
