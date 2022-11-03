#include "main.h"
/**
 * _sqrt_recursion - find square root
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return helper_func(n, 1);
}
/**
 * helper_func - recursive check
 * @n: integer
 * @i: testing integer
 * Return: int
 */
int helper_func(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (helper_func(n, i + 1));
}
