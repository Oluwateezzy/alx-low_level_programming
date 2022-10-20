#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
