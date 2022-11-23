#ifndef CALC.H
#define CALC.H
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - structure op
 * @op: the operator
 * @f: function associate
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
