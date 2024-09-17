// write a c program to create an array of 10 elements using static memory allocation and print all numbers.

#include<stdio.h>
void main()
{
    int i;
    int arr[10];

    for( i = 0;i<10;i++)
    {
        arr[i] = i+1;
    }
    printf("number in the array\n");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}