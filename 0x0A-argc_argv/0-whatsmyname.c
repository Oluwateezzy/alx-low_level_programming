#include <stdio.h>
/**
 * main - entry point: program that print it own name
 * Return: int
 * @argc: argurment counter
 * @argv: arguement vector
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
