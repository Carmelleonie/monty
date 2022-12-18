#include "monty.h"
/**
*fpop - delete the element in the stack
*@head: the top of the stack
*@cut: the data
*Return: Nothing
*/
void fpop(stack_t **head, unsigned int cut)
{
	stack_t *noun;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	noun = *head;
	*head = noun->next;
	free(noun);
}
