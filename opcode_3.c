#include "monty.h"
/**
*nop - doesn’t do anything.
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(*stack);
	UNUSED(line_number);
}

/**
*pchar - prints the char at the top of the stack, followed by a new line
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void pchar(stack_t **stack, unsigned int line_number)
{
	if (is_empty(*stack) || (*stack)->next == NULL)
	{
		putchar_error(line_number);
		return;
	}
	else if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		ascii_error(line_number);
	}
	printf("%c\n", (*stack)->n);
}

/**
*pstr -  prints the string starting at the top of the stack,
*followed by a new line.
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *top;

	top = (*stack);
	while (top-next)
	{
		if (top->n != 0 || top->n > 0 && top->n < 128)
		{
			printf("%c", top->n);
		}
	}
	printf("\n");
}

/**
*rotl - rotates the stack to the top.
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	UNUSED(line_number);

	if (!stack || !*stack || !(*stack)->next)
	{
		return;
	}
	(*stack)->next->prev = NULL;
	while (top->next)
	{
		top = top->next;
	}
	top->next = *stack;
	(*stack) = (*stack)->next;
	top->next->next = NULL;
	top->next->prev = top;
}

/**
*rotr -  rotates the stack to the bottom.
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void rotr(stack_t **stack, unsigned int line_number)
{

	stack_t *top;
	UNUSED(line_number);

	if (!stack || !*stack || !(*stack)->next)
	{
		return;
	}
	top = *stack;
	while (top->next)
	{
		top = top->next;
	}
	top->next = *stack;
	top->prev->next = NULL;
	top->prev = NULL;

	(*stack)->prev = top;
	*stack = top;
}
