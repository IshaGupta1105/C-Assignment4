//WAP to print cubes of the first 10 natural numbers.
#include<stdio.h>

int main()
{
    int i=1,cube;
    printf("Cubes of the first 10 natural numbers are:\n");
    do{
        cube=i*i*i;
        i++;
        printf("%d\n",cube);
    }while(i<=10);
    return 0;
}