#include <stdio.h>
#include "stack.h"

int main() {
    Stack* stack = createStack();

    // Demostración de operaciones en el stack
    push(stack, 10);
    printStack(stack);

    push(stack, 20);
    printStack(stack);

    push(stack, 30);
    printStack(stack);

    printf("Peek: %d\n", peek(stack));
    printStack(stack);

    printf("Pop: %d\n", pop(stack));
    printStack(stack);

    printf("Pop: %d\n", pop(stack));
    printStack(stack);

    printf("Is stack empty? %s\n", isEmpty(stack) ? "Yes" : "No");
    
    printf("Pop: %d\n", pop(stack));
    printStack(stack);

    printf("Is stack empty? %s\n", isEmpty(stack) ? "Yes" : "No");

    freeStack(stack);

    return 0;
}
