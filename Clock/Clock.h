#include<stdio.h>

typedef struct{
    int hrs;
    int min;
    int sec;
}Clock;

Clock* Clock_New();
void Clock_Delete(Clock** this);