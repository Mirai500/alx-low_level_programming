#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * print_alphabet - prints the alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c++;
	}
	_putchar('\n');
}
