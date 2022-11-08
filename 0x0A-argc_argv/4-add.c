#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point: program that print it own name
 * Return: int
 * @argc: argurment counter
 * @argv: arguement vector
 */
int main(int argc, char *argv[])
{
	int i, digit, sum = 0;

	if (argc == 1)
		return (sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			digit = atoi(argv[i]);
			if (!isdigit(digit))
				printf("Error\n");
			sum = sum + digit;
		}
		printf("%d\n", sum);
		return (0);
	}
}
