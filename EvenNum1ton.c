// write a c program to find sum of all even numbers between 1ton.
#include<stdio.h>
void main()
{
    int i;int n;
    int add=0;
    printf("please enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            add=add+i;
        }
    }
    
    printf("The sum of all even numbers between 1 and %d is: %d\n", n, add);
}
