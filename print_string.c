#include "main.h"
/**
 * print_string - returns string
 * @str: holds character pointer
 * @count: character counter
 */

void print_string(const char *str, int *count)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
		(*count)++;
	}
}
