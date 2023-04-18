#include<stdio.h>
#include<stdlib.h>
#include "Stack.h"

Stack* Stack_New()
{
    //Operations
    Stack* s = (Stack*)malloc(sizeof(Stack));
}

void Stack_Delete(Stack** this)
{
    //Operations
    free(*this);
    *this = NULL;
}

