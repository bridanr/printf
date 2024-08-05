#include "main.h"
/**
 * prt_exc_str - print exclusuive string.
 * @val: parameter.
 * Return: integer.
 */

int prt_exc_str(va_list val)
{
	char *s;
	int r, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] < 32 || s[r] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + prt_HEX_ext(value);
		}
		else
		{
			_putchar(s[r]);
			length++;
		}
	}
	return (length);
}
