#include "main.h"
/**
 * print_char - prints character
 * @c: character arg
 * @count: character counter
 */

void print_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
