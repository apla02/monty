#include "monty.h"
void _add(stack_t **stack, unsigned int lin_num)
{
	(void)stack;

	if (list.Size > 1)
	{
		int Number1, Number2;

		Number1 = Pop_Stack(&list);
		Number2 = Pop_Stack(&list);

		Push_Stack(&list, Number2 + Number1);
	}
	else
	{
		printf("L%d: can't add, stack too short\n", lin_num);
		exit (EXIT_FAILURE);
	}
}

void _sub(stack_t **stack, unsigned int lin_num)
{
	(void)stack;

	if (list.Size > 1)
	{
		int Number1, Number2;

		Number1 = Pop_Stack(&list);
		Number2 = Pop_Stack(&list);

		Push_Stack(&list, Number2 - Number1);
	}
	else
	{
		printf("L%d: can't sub, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}
}

void _mul(stack_t **stack, unsigned int lin_num)
{
	(void)stack;

	if (list.Size > 1)
	{
		int Number1, Number2;

		Number1 = Pop_Stack(&list);
		Number2 = Pop_Stack(&list);

		Push_Stack(&list, Number2 * Number1);
	}
	else
	{
		printf("L%d: can't sub, stack too short\n", lin_num);
		exit(EXIT_FAILURE);
	}
}
