#include "monty.h"

int checker(stack_t **stack)
{
	if ((*stack)->n == STACK)
	{
		return (STACK);
	}
	else if ((stack)->n == QUEUE)
	{
		return (QUEUE);
	}
	return (NO_STACK_QUEUE);
}

void stack(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	UNUSED(line_number);
}





void queue(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = QUEUE;
	UNUSED(line_number);
}
