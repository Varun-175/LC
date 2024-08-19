#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* arr, int arrSize, int* returnSize) 
{
    int* answer = (int*)malloc(arrSize * sizeof(int));
    
    *returnSize = arrSize;

    answer[0] = 1; 
    for (int i = 1; i < arrSize; i++) 
    {
        answer[i] = answer[i - 1] * arr[i - 1];
    }

    int rightProduct = 1;
    for (int i = arrSize - 1; i >= 0; i--) 
    {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= arr[i];
    }

    return answer;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter element-%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int returnSize;
    int* res = productExceptSelf(arr, size, &returnSize);

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) 
    {
        printf("%d", res[i]);
        if (i < returnSize - 1)
            printf(", ");
    }
    printf("]\n");

    free(res);

    return 0;
}
