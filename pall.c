#include "monty.h"  /* Include the provided header file */

/**
 * f_pall - Implementation of the pall opcode
 * @head: Pointer to the top of the stack
 * @number: Unused parameter (provided for function signature compatibility)
 *
 * Description: Prints all the values on the stack
 */
void f_pall(stack_t **head, unsigned int number)
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->n);  /* Assuming stack elements are integers */
		current = current->next;
	}
}

