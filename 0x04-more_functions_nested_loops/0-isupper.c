#include "main.h"

/**
 * _iupper - check if a parameter is uppercase
 * @c: input character
 * Return: 1 if character i an uppercase character, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
