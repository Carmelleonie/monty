#include "monty.h"

void add_error(unsigned int line_number);
void sub_error(unsigned int line_number);
void mul_error(unsigned int line_number);
void div_error(unsigned int line_number);
void mod_error(unsigned int line_number);
/**
*add_error -  print the error message
*If the stack contains less than two elements
*And exit with the EXIT_FAILURE
*Return: Nothing
*/
void add_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
/**
*sub_error - print the error message
*If the stack contains less than two elements
*And exit with the EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void sub_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
*mul_error - print the error message
*If the stack contains less than two elements
*And exit with the EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void mul_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}


/**
*div_error - print the error message
*If the stack contains less than two elements
*And exit with the EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
*mod_error - print the error message
*If the stack contains less than two elements
*And exit with the EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void mod_error(unsigned int line_number)
}
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
