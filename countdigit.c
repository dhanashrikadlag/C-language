// write a c program to count number of digits  in a number.

#include<stdio.h>
void main()
{
    int n;
    int count=0;
    printf("enter value of n\n");
    scanf("%d",&n);
    while(n>0)
    {
        n = n/10;
        count++;
    }
    printf("%d",count);
}