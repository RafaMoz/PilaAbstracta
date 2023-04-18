#include<stdio.h>

typedef struct{
    int* stack;
    size_t top;
    size_t capacity;
}Stack;

Stack* Stack_New();
void Stack_Delete(Stack** this);

