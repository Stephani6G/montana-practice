#include "monty.h"

/**
* func_pop - function that prints the top of the stack
* @head: double head pointer to the stack
* @counter: line count
*/
void func_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.filem);
		free(bus.content);
		frees_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
* func_pint - function that prints the top of the stack
* @head: double head pointer to the stack
* @counter: line count
*/
void func_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.filem);
		free(bus.content);
		frees_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
* func_nop - function that does nothing
* @head: double head pointer to the stack
* @counter: line count
*/
void func_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
