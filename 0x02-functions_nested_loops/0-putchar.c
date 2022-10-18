#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 = success
 */
int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
