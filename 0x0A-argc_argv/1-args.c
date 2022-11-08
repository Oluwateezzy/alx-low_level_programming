#include <stdio.h>
/**
 * main - entry point: program that print it own name
 * Return: int
 * @argc: argurment counter
 * @argv: arguement vector
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; *argv; argv++)
	{
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
