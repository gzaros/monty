#include "monty.h"

/**
* rotr - rotates the last node of a stack_t stack
* @stack: stack head
* @row_count: Row count
*
* Return: void
*/

void rotl(stack_t **stack, unsigned int row_count)
{

        stack_t *prev;
        stack_t *bottom;


        (void) row_count;

        if (!*stack || !(*stack)->next || !stack)
                return;

        bottom = *stack;

        while (bottom->next)
                bottom = bottom->next;


    prev = bottom->prev;
	
	bottom->next = *stack;
	
	bottom->prev = NULL;
	
	prev->next = NULL;
	
	(*stack)->prev = bottom;
	
	*stack = bottom;

}
