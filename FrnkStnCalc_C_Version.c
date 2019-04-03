/*=== This is FrnkStnCalc, a simple command line calculator, C version ===*/

/* Include list */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Declare variables */
double Argument1, Argument3, DataResults;
#define NumbersLimit 50
char Argument2, heyhey[NumbersLimit];

/* Declare functions */
void FuncResults(double DataResults);

/* Start program, main function */
int main(int argc, char *argv[])
{
	/* || means OR in C, Argc is a function, and the name means "argument count" */
	if (argc > 1 + 3 || argc < 1 + 3)
	{
		printf("The calculator is limited to 2 numbers operations...\n");
		/* Exit program */
		return 0;
	}

	/* === Arguments === */
	/* Copy second argument to "heyhey" string using Memcpy */
	memcpy(heyhey, argv[2], 50);

	/* Convert string to float using Atoi */
	Argument1 = atoi(argv[1]); /*Arg1*/
	Argument2 = argv[2][0];  /*Arg2*/
	Argument3 = atoi(argv[3]); /*Arg3*/

	/*==== Operator conditions and DataResults print function ===*/
	/* Plus */
	if (Argument2 == '+')
	{
		FuncResults(Argument1 + Argument3);
	}
	/* Minus */
	else if (Argument2 == '-')
	{
		FuncResults(Argument1 - Argument3);
	}
	/* Division */
	else if (Argument2 == '/')
	{
		FuncResults(Argument1 / Argument3);
	}
	/* Multiply */
	else if (Argument2 == 'x')
	{
		FuncResults(Argument1 * Argument3);
	}
	/* Say hello if "hey" input is received as second argument */
	else if (strcmp(heyhey, "hey") == 0)
	{
		printf("Hello! :)\n");
	}
	/* Print an error message if a inexistent operator is used */
	else
	{
		printf("Operator does not exist\n");
	}
	/* Exit program */
	return 0;
}

/* === Functions === */
/* Print DataResults function */
void FuncResults(double DataResults)
{
	printf("Result: %f %c %f = %f\n", Argument1, Argument2, Argument3, DataResults);
}
