#include "monty.h"

/**
*_stack - sets the format of the data to a stack (LIFO)
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void _stack(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;
	(*stack)->next->prev = NULL;
	while (top->next)
		top = top->next;
	top->next = *stack;
	(*stack) = (*stack)->next;
	top->next->next = NULL;
	top->next->prev = top;
}
/**
*_queue -  sets the format of the data to a queue (FIFO)
*@stack: The pointer to the queue
*@line_number: File line execution
*Return: Nothing
*/
void _queue(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	top = *stack;
	while (top->next)
		top = top->next;

	top->next = *stack;
	top->prev->next = NULL;
	top->prev = NULL;

	(*stack)->prev = top;
	*stack = top;

}
