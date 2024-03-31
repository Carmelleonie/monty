#include "main.h"

void instrcutions()(stack_t **stack, unsigned int line_number)
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
		return;
	}
}
void run()
