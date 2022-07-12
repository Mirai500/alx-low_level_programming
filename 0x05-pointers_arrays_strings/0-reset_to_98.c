#include "main.h"

/**
 * reset_to_98 - updates the value of a pointer to 98
 * n: integer
 * ptr_n: pointer to be updated
 * Return: Always 0.
 */
void reset_to_98(int n)
{
	int n, *ptr_n;

	*ptr_n = &n;

	*ptr_n = 98;
}
