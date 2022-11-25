#include <stdio.h>
/**
 * before_main - print before main function
 * Return: void
 */
void __attribute__ ((constructor)) befor_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
