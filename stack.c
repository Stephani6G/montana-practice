#include "monty.h"

/**
* frees_stack - a  function that frees a doubly linked list
* @head: head pointer to the stack
*/
void frees_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* fu_stack - function that prints the top
* @head: head of stack
* @counter: line count
*/
void fu_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
