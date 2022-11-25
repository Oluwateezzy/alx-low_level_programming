#include "calc.h"
/**
 * main - entry point
 * @argc - length of argv
 * @argv - array
 * Return - int
 */
int main(int argc, char *argv)
{
	int arg1, arg2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
