#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 10;

// Creating a stack
struct stack {
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Check if the stack is empty
int isempty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
    if (isfull(s)) {
        printf("STACK FULL!");
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
}

// Remove element from stack
int pop(st *s) {
    if (isempty(s)) {
        printf("\nSTACK EMPTY\n");
        return -1;
    } else {
        int popped_item = s->items[s->top];
        s->top--;
        return popped_item;
    }
}

// Print elements of stack
void printStack(st *s) {
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Driver Code
int main(void) {
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printf("Initial stack: "); printStack(s);
    printf("Popped item: %d\n", pop(s));
    printf("Stack after popping an element: "); 
    
    printStack(s);

    free(s);

    return 0;
}
