#include "3-calc.h"
/**
 * op_add - add two integer
 * @a: integer
 * @b: integer
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integer
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: ineteger
 * @b: integer
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get the remainder of two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
