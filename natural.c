//write a c program to print all naturalnumbers from 1 to n.

#include<stdio.h>

void main()
{
    int n; 
    int i; 
    printf("Please enter the value of n: "); 
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}
