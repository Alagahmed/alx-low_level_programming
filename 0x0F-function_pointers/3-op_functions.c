#include "3-calc.h"

int op_add(int o, int u);
int op_sub(int o, int u);
int op_mul(int o, int u);
int op_div(int o, int u);
int op_mod(int o, int u);

/**
 * op_add - Returns the sum of two numbers.
 * @o: The first number.
 * @u: The second number.
 *
 * Return: The sum of a and u.
 */
int op_add(int o, int u)
{
	return (o + u);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @o: The first number.
 * @u: The second number.
 *
 * Return: The difference of a and u.
 */
int op_sub(int o, int u)
{
	return (o - u);
}

/**
 * op_mul - Returns the product of two numbers.
 * @o: The first number.
 * @u: The second number.
 *
 * Return: The product of a and u.
 */
int op_mul(int o, int u)
{
	return (o * u);
}

/**
 * op_div - Returns the division of two numbers.
 * @o: The first number.
 * @u: The second number.
 *
 * Return: The quotient of a and u.
 */
int op_div(int o, int u)
{
	return (o / u);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @o: The first number.
 * @u: The second number.
 *
 * Return: The remainder of the division of a by u.
 */
int op_mod(int o, int u)
{
	return (o % u);
}
