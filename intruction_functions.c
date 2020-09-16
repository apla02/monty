void _push(stack_t **stack, lin_num)
{
	(void **)stack;
	int index = 0;

	while (a[index])
			if (isdigit(a[1][index]))
				index++;
			else
			{
				printf("L%d: usage: push integer\n", lin_num);
				exit (EXIT_FAILURE);
			}
	Push_Stack(&list, atoi(a[1]));
    