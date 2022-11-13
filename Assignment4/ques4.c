//WAP to print the first 10 odd natural numbers.
#include<stdio.h>

int main()
{
    int x=0;
    printf("The first 10 odd natural numbers:\n");
    while(x<10)
    {
        printf("%d\n",(2*x+1));
        x++;
    }
    return 0;
}