#include <stdio.h>
#include "stack.h"

int main()
{
    push(3.14);
    push(2.71);
    push(1.41);
    push(1.61);

    printf("Popped %f\n", pop());
    printf("Popped %f\n", pop());
    printf("Popped %f\n", pop());

    return 0;
}