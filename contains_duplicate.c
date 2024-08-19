#include<stdio.h>
int main()
{
    int size,flag=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int i,j,arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                flag++;
                break;
            }
        }
    }
    if(flag>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}