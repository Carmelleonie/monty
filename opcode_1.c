#include "monty.h"

/**
*push - pushes an element to the stack.
*@stack: a double linked list
*@line_number: File line execution
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = *stack, *top = NULL;

	new_node->n = n;

	if (is_empty())
	{
		is_empty_error();
		return;
	}
	new_node-prev = top;
	top->next = new_node;
	new_node->next = NULL;
}

/**
*pall - pall an element to the stack.
*@stack: a double linked list
*@line_number: File line execution
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *top = (*stack);

	if (is_empty((*stack)))
	{
		return;
	}
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}

/**
*pint -  prints the value at the top of the stack, followed by a new line.
*@stack: a double linked list
*@line_number: File line execution
*/
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;

	if (!(is_empty()))
	{
		return;
	}
	printf("%d\n", top->n);
}

/**
*pop - pop an element from the stack.
*@stack: a double linked list
*@line_number: File line execution
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top = (*stack);

	if (is_empty())
	{
		return;
	}
	top->prev->next = NULL;
	top = top->prev;
	free(top);
}

/**
*swap -  swaps the top two elements of the stack.
*@stack: a double linked list
*@line_number: File line execution
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int top_value;

	if (is_empty((*stack) || (*stack)->next == NULL)
	{
		swap_error(line_number);
	}
	top_value = (*stack)->n;
	(*stack) = (*stack)->next->n;
	(*stack)->next->n = top_value;
}
