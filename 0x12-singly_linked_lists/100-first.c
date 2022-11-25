#include <stdio.h>
/**
 * before_main - print before main function
 * #constructor: constructor
 * Return: void
 */
void before_main() __attribute__((constructor));
void befor_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
