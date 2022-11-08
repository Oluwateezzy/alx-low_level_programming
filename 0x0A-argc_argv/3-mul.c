#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point: program that print it own name
 * Return: int
 * @argc: argurment counter
 * @argv: arguement vector
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum * atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
