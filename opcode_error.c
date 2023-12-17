#include "monty.h"

void push_error(unsigned int line_number);
void pint_error(unsigned int line_number);
void pop_error(unsigned int line_number);
void swap_error(unsigned int line_number);
void putchar_error(unsigned int line_number);
/**
*push_error - print the error message
*if <int> is not an integer or if there is no argument given to push
*And exit with EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void push_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n"line_number);
	exit(EXIT_FAILURE);
}
/**
*pint_error - print the error message
*If the stack is empty
*And exit with EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

/**
*pop_error - print the error message
*If the stack is empty
*And exit with EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
/**
*swap_error - Print the error message
*If the stack contains less than two elements
*And exit with the EXIT_FAILURE
*@line_number: File line execution
*@line_number: File line execution
*Return: Nothing
*/
void swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
/**
*putchar_error -  print the error message
*If the value is not in the ascii table (man ascii)
*And exit with the EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void putchar_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}
