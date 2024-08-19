#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size],num;
    int i,j;
    for(i=0;i<size;i++)
    {
        printf("Enter element-%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the target : ");
    scanf("%d",&num);
    for(i=0;i<size-1;i++)
    {
        for(j=1;j<size;j++)
        {
            if((arr[i]+arr[j])==num)
            {
                printf("[%d,%d]",i,j);
            }
        }
    }
    return 0;
}