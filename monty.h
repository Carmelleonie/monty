#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Chech if the stack is empty */
void is_empty(stack_t **stack);

void is_empty(stack_t **stack)
{
	if ((*stack) == NULL)
	{
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
	}
	return;
}
/*Stack's opereation in opcode_1.c*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
/*Arthmetics's operation on stack and queue in opcode_2.c*/
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);

void _stack(stack_t **stack, unsigned int line_number);
void _queue(stack_t **stack, unsigned int line_number);

void nop(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);

void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
/*Errors's code*/
void first_error(void);
void openfile_sec_error(char *file);
void invalide_instruction_error(char *opcode, unsigned int line_number);
void malloc_fourth_error(void);
void is_empty_error(unsigned int line_number);

/* Stack operation's errors*/
void push_error(unsigned int line_number);
void pint_error(unsigned int line_number);
void pop_error(unsigned int line_number);
void swap_error(unsigned int line_number);
void putchar_error(unsigned int line_number);

/* Arithmetics'errors */
void add_error(unsigned int line_number);
void sub_error(unsigned int line_number);
void mul_error(unsigned int line_number);
void div_error(unsigned int line_number);
void mod_error(unsigned int line_number);
void zero_div_error(unsigned int line_number);
void ascii_error(unsigned int line_number);
#endif
