#include "monty.h"

/**
*push - pushes an element to the stack.
*@stack: a double linked list
*@line_number: File line execution
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = *stack, *top = NULL;

	if (new_node == NULL)
	{
		is_empty_error();
		return;
	}
	for (int i = 0; val[1][i] != NULL; i++)
	{
		if (val[1][0] == '-')
			continue;
		if (val[1][i] < '0' || val[1][i] > '9')
		{
			not_an_int_error(line_number);
			return;
		}
	}
	new_node->n = atoi(val);
	if (checker(*stack) == STACK)
	{
		top = (*stack)->next;
		new_node->prev = (*stack);
		new_node->next = top;

		if (top == NULL)
		{
			top->prev = new_node;
		}
		(*stack)->next = new_node;
	}
	top = (*stack);

	while (top->next != NULL)
	{
		top = top->next;
	}
	new_node->prev = top;
	new_node->next = NULL;
	top->next = new_node;
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
	free(top);
}

/**
*pint -  prints the value at the top of the stack, followed by a new line.
*@stack: a double linked list
*@line_number: File line execution
*/
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;

	if (is_empty())
	{
		pint_error(line_number);
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
		pop_error(line_number);
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
		return;
	}
	top_value = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = top_value;
}
