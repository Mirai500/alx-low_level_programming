#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the int for function argument
 * Return: integer value
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	putchar(last + '0');
	return (last);
}
