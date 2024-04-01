#include "main.h"
/**
*instructions - 
*@opcode: the opcode
*@stack: a double linked list
*@line_number: File line execution
*Return : Nothing
*/
void instrcutions(char *opcode)(stack_t **stack, unsigned int line_number)
{
	instruction_t operation[] = {
		{"push", push};
		{"pall", pall};
		{"pint", pint};
		{"pop", pop};
		{"swap", swap};
		{"add", add};
		{"nop", nop};
		{"sub", sub};
		{"div", div};
		{"mul", mul};
		{"mod", mod};
		{"pchar", pchar};
		{"pstr", pstr};
		{"rotl", rotl};
		{"rotr", rotr};
		{"stack", stack};
		{"queue", queue};
	}

	for (size_t i; i < sizeof(operation) / sizeof(operation[0]); i++)
	{
		if (strcmp(opcode, operation[i].opcode) == 0)
		{
			operation[i].f(stack, line_number);
			return;
		}
	}
	if (opcode && opcode[0] == '#')
	{
		continue;
	}
}


/**
*free_all - free the stack
*@stack: double linked list
*Return : Nothing
*/
void free_all(stack_t **stack)
{
	stack_t *top = (*stack);

	while ((*stack))
	{
		top = (*stack)->next;
		free(*stack);
		(*stack) = top;
	}
}


/**
*start - intiate to STACK
*@stack: double linked list
*Return: On success EXIT_SUCCESS else EXIT_FAILURE
*/
int start(stack_t **stack)
{
	stack_t *top = malloc(sizeof(stack_t));

	if (top == NULL)
	{
		malloc_fourth_error();
		return;
	}
	top->n = STACK;
	top->next = NULL;
	top->prev = NULL;
	exit(EXIT_SUCCESS);
}
/**
*executor - it monty program
*@stream - the path to the file containing Monty byte code
*return : 
*/
int executor(FILE *stream)
{
	stack_t *stack = NULL;
	char *ptr_to_buffer = NULL;
	size_t len = 0, exit_s = EXIT_SUCCESS;
	unsigned int line_number = 0, j;

	while (getline(&ptr_to_buffer, &len, stream) != EOF)
	{
		line_number += 1;
		val = strtok(line, "\n\t\r")
		if (ptr_to_buffer[0] == '\n' || strcmp(ptr_to_buffer, "\n") == 0)
		{
			continue;
			free_all(&stack);
		}
		f = instruction(val[0]);
		if (f == NULL)
		{
			free_all(&stack);
			exit_s = invalide_instruction(val[0], line_number);
			break;
		}
		j = _strlen();
		f(&stack, line_number);
		if (_strlen() != j)
		{
			if (val && val[j)
				exit_s = atoi(val[j]);
			else
				exit_s = EXIT_FAILURE;
			free_all(&stack)
			break;
		}
		free_all(&stack);
	}
	free_all(&stack);

	if (ptr_to_buffer && *ptr_to_buffer == 0)
	{
		free(ptr_to_buffer);
		return (malloc_fourth_error());
	}

	free(ptr_to_buffer);
	return (exit_s);
}
/**
*_strlen - compute the lenght of val
*take noargument
*Return : lenght
*/
unsigned int _strlen(void)
{
	unsigned int len = 0;

	while ((val[len]) != '\0')
	{
		len++;
	}
	return(len);
}
