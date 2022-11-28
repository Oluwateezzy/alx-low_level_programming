#include "3-calc.h"
/**
 * main - program entry point
 * @argc: length of argument
 * @argv: array of argument
 * Return: integer
 */
int main(int argc, char *argv)
{
	int arg1, arg2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	result = operator(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
