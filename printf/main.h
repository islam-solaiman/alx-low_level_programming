#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(const char *s);
int _puts(char *str);
int check_type(char c, va_list args);
int _printf(const char *format, ...);

#endif
