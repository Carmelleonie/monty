#include "monty.h"
/**
*swap - swap the value of stak
*@head: the head of the list
*@cut: the data
Return: Nothing
*/

void swap(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	int lenght = 0, my_n;

	new_node = *head;
	while (h)
	{
		new_node = new_node->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node = *head;
	my_n = h->n;
	new_node->n = new_node->next->n;
	new_node->next->n = my_n;
}

/**
*add - add all element in the list
*@head: the head of list
*@cut: the data
*Return: Nothing
*/

void add(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	int lenght = 0, my_n;

	new_node = *head;
	while (new_node)
	{
		new_node = new_node->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node = *head;
	my_n = new_node->n + new_node->next->n;
	new_node->next->n = my_n;
	*head = new_node->next;
	free(new_node);	
}

/**
*nop - doesn't do anything
*head: the head of the list
*@cut: the data
*Return: Nothing
*/
void nop(stack_t **head, unsigned int cut)
{
	(void) counter;
	(void) head;
}
/**
*sub - subtract in the list
*@head: the head of the list
*@cut: the data
*Return: Nothing
*/
void sub(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	int i, k;

	aux = *head;
	for (k = 0; new_node != NULL; k++)
		new_node = new_node->next;
	if (k < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node = *head;
	i = new_node->next->n - new_node->n;
	new_node->next->n = i;
	*head = new_node->next;
	free(new_node);
}
/**
*div - Divide element in the list
*@head: the head of the list
*@cut: the data
*Return: Nothing
*/
void div(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	int lenght = 0, my_n;

	new_node = *head;
	while (new_node)
	{
		new_node = new_node->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node = *head;
	if (new_node->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	my_n = new_node->next->n / new_node->n;
	new_node->next->n = my_n;
	*head = new_node->next;
	free(new_node);
}
/**
*mul - multiple the elements in the list and return the result
*@head: the head of the list
*@cut: the data in list
*Return: Nothing
*/
void mul(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	int lenght = 0, my_n;

	new_node = *head;
	while (new_node)
	{
		new_node = new_node->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node = *head;
	my_n = new_node->next->n * new_node->n;
	new_node->next->n = my_n;
	*head = new_node->next;
	free(new_node);
}
/**
*mod - find the modulo of the element
*@head: the head of the list
*@cut: the data
*Return: Nothing
*/
void mod(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	int lenght = 0, my_n;

	new_node = *head;
	while (new_node)
	{
		new_node = new_node->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node = *head;
	if (new_node->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	my_n = new_node->next->n % new_node->n;
	new_node->next->n = my_n;
	*head = new_node->next;
	free(new_node);
}
/**
*pchar - prints the char at the top of the stack
*@head: the head of the node
*@cut: the data
*Return: Nothing
*/
void pchar(stack_t **head, unsigned int cut)
{
	stack_t *new_node;

	new_node = *head;
	if (!new_node)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (new_node->n > 127 || new_node->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cut);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", new_node->n);
}
