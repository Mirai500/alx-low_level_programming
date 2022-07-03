#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));

	return (0);
}