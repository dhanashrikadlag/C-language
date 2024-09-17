//write a c program to print multiplication table any number.
#include<stdio.h>
void main()
{
    int n; int i; int ans;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        ans=n*i;
        printf("%d\n",ans);
    }
}