#include "main.h"
/**
 * _pow_recursion - return the value of x raise to the power of y
 * @x: integer
 * @y: power
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
