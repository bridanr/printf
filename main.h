#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int prt_pointer (va_list val);
int prt_unsigned(va_list args);
int prt_hex_ext(unsigned long int num);
int _strlengthc(const char *s);
int prt_HEX_ext(unsigned int num);
int prt_exc_str(va_list val);
int prt_HEX(va_list val);
int prt_hex(va_list val);
int prt_oct(va_list val);
int prt_bin(va_list val);
int prt_revs(va_list args);
int prt_rot13(va_list args);
int prt_i(va_list args);
int prt_d(va_list args);
int _strlen(char *s);
int rev_str(char *s);
int print_37(void);
int prt_c(va_list val);
int prt_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
