// write a c program to print sum of odd numbers from 1 to n.
#include<stdio.h>
void main()
{
    int n;
    int i;
    int add=0;
    printf(" please neter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            add=add+i;
        }
    }
printf("addition of all odd numbers between 1 to %d=%d",n,add);
    
}