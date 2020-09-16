#include "monty.h"

void _push(stack_t **stack, unsigned int lin_num)
{
	int index = 0;
	(void)stack;

	while ((list.inst_oper)[1][index])
		if ((isdigit((list.inst_oper)[1][index])))
			index++;
		else
		{
			printf("L%d: usage: push integer\n", lin_num);
			exit(EXIT_FAILURE);
		}

	Push_Stack(&list, atoi((list.inst_oper)[1]));
}

void _pall(stack_t **stack, unsigned int lin_num)
{
	(void)stack;
	(void)lin_num;

	Pall(list.Head);
}

void _pint(stack_t **stack, unsigned int lin_num)
{
    (void)stack;
    if (list.Size)    
        printf("%d\n", list.Head->n);
    else
    {
        printf("L%d: can't pint, stack empty\n", lin_num);
        exit (EXIT_FAILURE);
    }
}


void _pop(stack_t **stack, unsigned int lin_num)
{
    (void)stack;
    if (list.Size)
        Pop_Stack(&list);
    else
    {
        printf("L%d: can't pop an empty stack", lin_num);
        exit (EXIT_FAILURE);
    }
}

void _swap(stack_t **stack, unsigned int lin_num)
{
    int number1 =  0, number2 = 0;
    (void)stack;
    if (list.Size)
    {
        number1 = Pop_Stack(&list);
        number2 = Pop_Stack(&list);
        Push_Stack(&list, number1);
        Push_Stack(&list, number2);
    }   
    else
    {
    printf("L%d: can't swap, stack too shortc\n", lin_num);
        exit (EXIT_FAILURE);
    }
}


