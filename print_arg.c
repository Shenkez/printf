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

		write(1, &c_char, 1);
		(*count)++;
	}
	else if (type == 's')
	{
		char *s = va_arg(args, char *);

		while (*s)
		{
			write(1, s, 1);
			s++;
			(*count)++;
		}
	}
}


