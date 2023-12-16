#include <stdio.h>
#define STACK_SIZE 3

static double stack[STACK_SIZE];
static unsigned short int stack_length = 0;

void push(double value)
{
    if (stack_length >= STACK_SIZE)
    {
        printf("Stack overflow\n");
        return;
    }

    stack[stack_length] = value;
    stack_length++;
    printf("Pushed %f into %d place\n", value, stack_length);
    return;
}

double pop(void)
{
    if (stack_length == 0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[--stack_length];
}