#include "monty"

/**
*f_pall - display the stack
*@head: the head of the stack
*@num: the data
*Return: Nothing
*/
void f_pall(stack_t **head, unsigned int num)
{
	stack_t *new_node;

	new_node = *head;
	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		new_node = new_node->next;
	}
}
