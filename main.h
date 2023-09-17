#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void print_arg(char type, va_list args, int *count);
int _printf(const char *format, ...);
#endif
