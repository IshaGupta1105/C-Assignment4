//WAP to print the first 10 even natural numbers.
#include<stdio.h>

int main()
{
    int i;
    printf("The first 10 even natural number are:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",2*i);
    }
    return 0;
}