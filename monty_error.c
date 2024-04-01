s#include "monty.h"

void first_error(void);
void openfile_sec_error(char *file);
void invalide_instruction_error(char *opcode, unsigned int line_number);
void malloc_fourth_error(void);
void is_empty_error(unsigned int line_number);

/**
*first_error -  print the error message USAGE: monty file
*If the user does not give any file or more than one argument to your program
*Return: Nothing
*/
void first_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
*openfile_sec_error - print the error message
*If not possible to pen the file
*and exit EXIT_FAILURE
*@file: the needed file.m 
*Return: Nothing
*/
void openfile_sec_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
*invalide_instruction_error - print the error message
*if the file contains an invalid instruction
*And exit EXIT_FAILURE
*@opcode: The operation to be performed
*@line_number: File line execution
*Return: Nothing
*/
void invalide_instruction(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",opcode);
	exit(EXIT_FAILURE);
}
/**
*malloc_fourth_error -  print the error message
*If you can’t malloc anymore
*And exit EXIT_FAILURE
*Return: Nothing
*/
void malloc_fourth_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
*is_empty_error - print the message error
*if the stack is empty
*An exit with an EXIT_FAILURE
*@line_number: File line execution
*Return: Nothing
*/
void is_empty_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
