// write a c program to print first and last digit of a number

#include<stdio.h>
void main()
{
    int n;
    int count;
    int lastdigit;
    int firstdigit;
    
    printf("enter value of n\n");
    scanf("%d",&n);

    while(n>=10)
    {
        n=n/10;
    }

    firstdigit = n;
    printf("firstdigit =%d",firstdigit);
    printf("lastdigit=%d",lastdigit);
}