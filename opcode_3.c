#include "monty.h"
/**
*nop - doesn’t do anything.
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void nop(stack_t **stack, unsigned int line_number)
{
	void(*stack);
	void(line_number);
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
void rotl(stack_t **stack, unsigned int line_number);

/**
*rotr -  rotates the stack to the bottom.
*@stack: The pointer to the stack
*@line_number: File line execution
*Return: Nothing
*/
void rotr(stack_t **stack, unsigned int line_number);
