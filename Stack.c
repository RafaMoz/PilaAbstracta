#include<stdio.h>
#include<stdlib.h>
#include "Stack.h"

Stack* Stack_New()
{
    //Operations
}

void Stack_Delete(Stack** this)
{
    //Operations
    free(*this);
    *this = NULL;
}

