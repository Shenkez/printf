#include "main.h"
/**
 * print_arg - executes arguments
 * @type: holds the character entered
 * @args: list of variables
 * @count: pointer that keeps count
 */


void print_arg(char type, va_list args, int *count)
{
        if (type == 'c')
        {
                char c_char = va_arg(args, int);
                print_char(c_char, count);
        }
        else if (type == 's')
        {
                char *s = va_arg(args, char *);
                print_string(s, count);
        }
        else if (type == 'd' || type == 'i')
        {
                int num = va_arg(args, int);
                print_int(num, count);
        }
}
