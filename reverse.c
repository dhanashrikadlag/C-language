//write a c program to print all natural numbers in reverse order from n to 1. 

#include<stdio.h>

void main()
{
int n;int i;
printf("please enter value of n");
scanf("%d",&n);
i=n;
while(i>=1)
{
	printf("%d\n",i);
	i--;
}
}