#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int o, int u);
} op_t;

int op_add(int o, int u);
int op_sub(int o, int u);
int op_mul(int o, int u);
int op_div(int o, int u);
int op_mod(int o, int u);
int (*get_op_func(char *s))(int, int);

#endif
