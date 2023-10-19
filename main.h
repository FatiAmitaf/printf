#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct formaat - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct formata
{
	char *id;
	int (*f)(va_list);
} formati;

int _printf(const char *format, ...);
int printch(va_list valist);
int prints(va_list valist);
int printdi(va_list valist);
int printper(va_list valist);
int printbi(va_list valist);
int printrev(va_list valist);
int print_rev(char *s);
int printrot(va_list valist);
char *rot13(char *s1);
int _putchar(char c);
int _puts(char *str);

#endif
