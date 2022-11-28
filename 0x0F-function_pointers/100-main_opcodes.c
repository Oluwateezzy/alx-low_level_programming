#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcodes of its own program
 * @argc: length of argument
 * @argv: aargument array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	addr = (char *)main;
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", addr[i]);
	}
	printf("%02hhx\n", addr[i]);
	return (0);
}
