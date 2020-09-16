#include "monty.h"
void _pchar(stack_t **stack, unsigned int lin_num)
{
	(void)stack;

	if (list.Size)
	{
		if(list.Head->n > 32 && list.Head->n <= 126)
			printf("%c\n", list.Head->n);
		else
		{
			printf("L%d: can't pchar, value out of range\n", lin_num);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("L%d: can't pchar, stack empty\n", lin_num);
		exit (EXIT_FAILURE);
	}
}
