#include "monty.h"
/**
*add - add the two top element of the stack
*@stack: A pointer to the top of the stack
*@line_number: File line execution
*Return: Nothing
*/
void add(stack_t **stack, unsigned int line_number)
{

	if (is_empty((*stack)) || (*stack)->next == NULL)
	{
		add_error(line_number);
		return;
	}
	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
}

/**
*sub - subtracts the top element of the stack from the
*second top element of the stack.
*@stack: the pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void sub(stack_t **stack, unsigned int line_number)
{
	if (is_empty((*stack)) || (*stack)->next == NULL)
	{
		sub_error(line_number);
		return;
	}
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
}

/***
*div - divides the second top element of the stack
*by the top element of the stack.
*@stack: the pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void div(stack_t **stack, unsigned int line_number)
{
	if (is_empty((*stack)) || (*stack)->next == NULL)
	{
		div_error(line_number);
		return;
	}
	else if ((*stack)->n == 0)
	{
		zero_div_error(line_number);
		return;
	}
	(*stack)->next->n = (*stack)->next / stack->n;
	pop(stack, line_number);
}
/**
*mul -  multiplies the second top element of the stack
*with the top element of the stack.
*@stack: the pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void mul(stack_t **stack, unsigned int line_number)
{
	if (is_empty((*stack)) || (*stack)->next == NULL)
	{
		mul_error();
		return;
	}
	(*stack)->next->n = (*stack)->next->n * (*stack->n);
	pop(stack, line_number);
}
/**
*mod - computes the rest of the division of the second top element of the stack
*by the top element of the stack.
*@stack: the pointer of the stack
*@line_number: File line execution
*Return: Nothing
*/
void mod(stack_t **stack, unsigned int line_number)
{
	if (is_empty((*stack)) || (*stack)->next == NULL)
	{
		mod_error(line_number);
		return;
	}
	else if ((*stack)->n == 0)
	{
		zero_div_error(line_number);
		return;
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
}
