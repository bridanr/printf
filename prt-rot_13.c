#include "main.h"
/**
 * prt_rot13 - convert alphabets to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int prt_rot13(va_list args)
{
	int r, b, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (r = 0; s[r]; r++)
	{
		k = 0;
		for (b = 0; al[b] && !k; b++)
		{
			if (s[r] == al[b])
			{
				_putchar(bl[b]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[r]);
			counter++;
		}
	}
	return (counter);
}
