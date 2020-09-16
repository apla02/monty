#include "monty.h"
void (*get_op(char *inst_oper))(stack_t **stack, unsigned int lin_num)
{
	int i = 0;
	instruction_t instructions_fun[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"sub",  _sub},
		{"add", _add},
		{"swap", _swap},
		{"mul",  _mul},
		{NULL, NULL}
	};

	while (instructions_fun[i].opcode)
	{
		if (strcmp(inst_oper, instructions_fun[i].opcode) == 0)
			return (instructions_fun[i].f);
		i++;
	}
	return (NULL);
}