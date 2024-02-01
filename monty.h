#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
* struct bus - variables -args, file, line content
* @arg: value
* @filem: pointer to monty file
* @content: line content
*
* @lifi: flag change stack <-> queue
*
* Description: carries values through the program
*/
typedef struct bus
{
	char *arg;
	FILE *filem;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

void add_node(stack_t **head, int n);
void func_add(stack_t **head, unsigned int counter);
void func_sub(stack_t **head, unsigned int counter);
void func_mul(stack_t **head, unsigned int counter);
void func_div(stack_t **head, unsigned int counter);
void func_mod(stack_t **head, unsigned int counter);
void frees_stack(stack_t *head);
void func_push(stack_t **head, unsigned int counter);
void fu_stack(stack_t **head, unsigned int counter);
void func_queue(stack_t **head, unsigned int counter);
void add_queue(stack_t **head, int n);


#endif /* monty_h */
