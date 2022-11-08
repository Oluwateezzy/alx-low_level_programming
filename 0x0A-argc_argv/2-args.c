#include <stdio.h>
/**
 * main - entry point: program that print the arguement pass into it
 * Return: int
 * @argc: argurment counter
 * @argv: arguement vector
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
