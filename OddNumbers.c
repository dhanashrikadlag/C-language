// write a c program to print odd numbers between 1to 100.
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}