#include "monty.h"

void zero_div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}

void ascii_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}
