#include "monty.h"
/**
*pint - prints the value at the top of the stack, followed by a new line.
*@head: the head of the stack or of the queue
*@cut: unsigned integer
*Return: Nothing
*/
void pint(stack_t **head, unsigned int cut)
{

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
