//WAP to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>

int main()
{
    int x=9;
    printf("The first 10 odd natural numbers in reverse order:\n");
    while(x>=0)
    {
        printf("%d\n",(2*x+1));
        x--;
    }
    return 0;
}