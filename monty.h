#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

#define _GNU_SOURCE

typedef struct stack_s
{
    struct stack_s *next;
    struct stack_s *prev;
    int n;
} stack_t;

typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct
{
    FILE *file;
    char *content;
    stack_t *stack;
    unsigned int line_number;
} bus_t;

extern bus_t bus;

void execute(char *content, stack_t **stack, unsigned int line_number, FILE *file);
void free_stack(stack_t *stack);

#endif /* MONTY_H */

