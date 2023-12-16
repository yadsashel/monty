#include "monty.h"  /* Include the provided header file */

/**
 * f_push - Implementation of the push opcode
 * @head: Pointer to the top of the stack
 * @number: Number to push onto the stack
 *
 * Description: Pushes an element onto the stack
 */
void f_push(stack_t **head, unsigned int number)
{
	/* Add logic to push the number onto the stack */
	addnode(head, number);  /* Assuming addnode adds the number to the stack */
}

