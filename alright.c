#include "monty.h"
/**
*f_pstr -  prints the string starting at the top of the stack,followed by a new line.
*@head: the head of the node
*@cut: the data
*Return: Nothing
*/
void pstr(stack_t **head, unsigned int cut)
{
	stack_t *new_node;
	(void)cut;

	new_node = *head;
	while (new_node)
	{
		if (new_node->n > 127 || new_node->n <= 0)
		{
			break;
		}
		printf("%c", new_node->n);
		new_node = new_node->next;
	}
	printf("\n");
}
/**
*f_rotl - rotates the stack to the top.
*@head: the head of the list
*@cut: the data
*Return:  Nothing
*/
void rotl(stack_t **head, unsigned int cut)
{
	stack_t *new_node = *head, *ori;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ori = (*head)->next;
	ori->prev = NULL;
	while (new_node->next != NULL)
	{
		new_node = new_node->next;
	}
	new_node->next = *head;
	(*head)->next = NULL;
	(*head)->prev = ori;
	(*head) = ori;
}
/**
*f_rotr rotates the stack to the bottom.
*@head: the head of the list
*@cut: the data
*Return: Nothing
*/
void rotr(stack_t **head, __attribute__((unused)) unsigned int cut)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}

/**
*addnode - add nodes
*@head: the head of the list
*@n: an integer
*Return: Nothing
*/
void addnode(stack_t **head, int n)
{
	stack_t *nde, *temp;

	temp = *head;
	nde = malloc(sizeof(stack_t));
	if (nde == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = nde;
	nde->n = n;
	nde->next = *head;
	nde->prev = NULL;
	*head = nde;
}
/**
*addqueue - add queue
*@head: the head of the list
*@n: an integer
*Return: Nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
/**
*f_queue - sets the format of the data to a queue (FIFO).
*@head: the head of the list
*@cut: the data
*Return: Nothing
*/
void queue(stack_t **head, unsigned int cut)
{
	(void)head;
	(void)cut;
	bus.lifi = 1;
}
/**
*f_stack - the stack
*@head: the head of the list
*@cut: the data to be stored
*Return: Nothing
*/
void stack(stack_t **head, unsigned int cut)
{
	(void)head;
	(void)cut;
	bus.lifi = 0;
}
