int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr = (int *)malloc(2*sizeof(int));
    *returnSize=2;
    int i,j;
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                arr[0]=i;
                arr[1]=j;
            }
        }
    }
    return arr;
}