
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct op_f {
	char *op; // for operator
	int (*f)(int, int);
} op;

/* small function to calculate*/
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}

/* to get the correct function with corresponding operator */
int (*get_op_func(char *s))(int, int)
{
	op ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}

	return (NULL);
}

/* main function */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*pt)(int, int);

	/* check if wrong arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	pt = get_op_func(argv[2]); /* to get the right function */

	/* if one of the operations above */
	if (pt == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* if divide by 0 */
	if ((*argv[2] == "/" || *argv[2] == "%") && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/* if all good, perform the calculation by calling the pointer function */
	result = pt(num1, num2);
	printf("%d\n", result);

	return (0);
}

