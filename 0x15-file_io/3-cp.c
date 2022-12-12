#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @ac: length of argument
 * @av: argument vector
 * Return: integer
 */
int main(int ac, char **av)
{
	ssize_t fd, wr;

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!av[1])
	{
		printf("Error: Can't write from file %s\n", av[1]);
		exit(98);
	}
	if (fd == -1)
	{
		printf("Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	wr = write(fd, av[1], strlen(av[1])

	return (1);
}
