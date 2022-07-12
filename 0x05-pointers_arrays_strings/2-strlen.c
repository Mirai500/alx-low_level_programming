#include "main.h"
#include "string.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
