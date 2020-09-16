#include "monty.h"
int main(int argc, char *argv[])
{
	FILE *fd;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	extern unsigned int line_num = 1;
	char *instr_oper[2] = NULL;

	if (argc != 2) 
		dprintf(STDERR_FILENO, "USAGE: monty file\n"), exit(EXIT_FAILURE);

	fd = fopen(argv[1], "r");
	if (fd == NULL)
		fprintf(stderr, "Error: Can't open file <file>\n", argv[0]), exit(EXIT_FAILURE);

	while ((nread = getline(&line, &len, fd)) != -1) 
	{
		inst_oper[0] = strtok(line, "\t\n ");
		inst_oper[1] = strtok(NULL, "\t\n ");
		get_op(inst_oper[0]);
		line_num++;
	}
	fclose(fd);
	free(line);

}
void (*get_op(char *inst_oper))(stack_t **stack, unsigned int lin_num)
{
	int i = 0;
	instruction_t instructions_fun[] = {
	{"push", _push},
	{"pall", _pall},
	//{"pop", _pop},
	//{"pint", _pint},
	//{"swap", _swap},
	//{"add", _add},
	//{"nope", _nope}
	{NULL, NULL}
	};

    while (instructions_fun[i].op_Code)
    {
        if (strcmp(inst_oper, instructions_fun[i].op_Code) == 0)
            return (instructions_fun[i].f);
        i++;
    }
    return (NULL);
}

