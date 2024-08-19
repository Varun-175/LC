#include<stdio.h>

int maxProfit(int* arr, int arrSize) 
{
    if (arrSize == 0) 
    {
        return 0;
    }

    int min = arr[0];
    int maxProfit = 0,profit;
    int i,n1,n2;
    for (i = 1; i < arrSize; i++) 
    {
    
        if (arr[i] < min) 
        {
            min = arr[i];
        }

        profit = arr[i] - min;

        if (profit > maxProfit) 
        {
            maxProfit = profit;
        }

        n1=min;
        n2=arr[i];
    }
    printf("\n%d is the best day to buy and %d is the best day to sell.\n",n1,n2);

    return maxProfit;
}

int main()
{
    int size,min=0,max=0;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    int i,arr[size];
    printf("\nEnter the prices: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res = maxProfit(arr,size);
    printf("\nThe profit is %d\n",res);
    return 0;
}