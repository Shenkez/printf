#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>


int _printf(const char *format, ...);
void print_arg(char type, va_list args, int *count);
void print_int(int num, int *count);
void print_string(const char *s, int *count);
void print_char(char c, int *count);

#endif
