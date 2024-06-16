
#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

// Prototipos de funciones
Stack* createStack();
void push(Stack* stack, int data);
int pop(Stack* stack);
int peek(Stack* stack);
bool isEmpty(Stack* stack);
void printStack(Stack* stack);
void freeStack(Stack* stack);

#endif



