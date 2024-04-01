#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *stream = NULL;
	

	if (argc != 2)
		return (usage_error());
	stream = fopen(argv[1], "r");
	if (stream == NULL)
		return (openfile_sec_error(argv[1]));
	int _open = execute(stream);
	fclose(stream);
	return(EXIT_SUCCESS);
}
