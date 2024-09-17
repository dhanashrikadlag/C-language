// write a c program to accept multiple n elements in array from user and find out the minimum element in array
// write a c program to accept array elements from user and find out the maximum element in given array

#include<stdio.h>
void main()
{
    int a[100]; int i;
    int min;
    int size;

    printf("enter size of an array");
    scanf("%d",&size);

    printf("enter array element");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<size;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }

    printf("maximum value of array element %d",min);



}