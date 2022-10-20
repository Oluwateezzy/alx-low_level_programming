#include "main.h"
/**
 * more_numbers - 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int ten, i;

	for (ten = 0; ten < 10; ten++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
