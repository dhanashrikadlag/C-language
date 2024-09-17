// write a cprogram to find the sum of all the elements of an array

#include<stdio.h>
void main()
{
    int sum = 0;
    int arr[10];

    for (int i=0;i<10;i++)
    {
        arr[i] = i+1;
    }

    printf("number in array\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
        sum+=arr[i];
    }
    printf("sum of array elements %d\n",sum);
}