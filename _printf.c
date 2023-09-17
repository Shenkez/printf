#include "main.h"

int _printf(const char *format, ...)
{
	int count;
	const char *p = format;
	va_list print_arg_list;

	va_start(print_arg_list, format);

	if (p == NULL)
		return (-1);

	while (*p != '\0')
	{
		if (*p != '%')
		{
			write(1, p, 1);
			count++;
		}
		else
		{
			p++;
			if (*p == '\0')
				break;
			if (*p == '%')
			{
				write(1, p, 1);
				count++;
			}
			else if (*p == 'c' || *p == 's')
			{
				print_arg(*p, print_arg_list, &count);
				count++;
			}
		}
		p++;
	}
	va_end(print_arg_list);
	return (count);
}
