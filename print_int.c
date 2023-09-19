#include "main.h"
/**
 * print_int - return an int
 * @num: holds a digit
 * @counter: keep character count
 *
 */

void print_int(int num, int *counter)
{
	char buffer[32];
	int len = 0;
	int is_negative = 0;
	int i;
	int j;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	do {
		buffer[len++] = '0' + num % 10;
		num /= 10;
	} while (num > 0);

	if (is_negative)
	{
		buffer[len++] = '-';
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		char temp = buffer[i];

		buffer[i] = buffer[j];
		buffer[j] = temp;
	}
	print_string(buffer, counter);
}
