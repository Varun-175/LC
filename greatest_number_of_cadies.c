bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) 
{
    bool *arr = (bool *)malloc(candiesSize * sizeof(bool));
    int max = candies[0];

    for(int i=0; i<candiesSize; i++)
    {
        if (candies[i]>max)
            max = candies[i];
    }    

    for(int i=0; i<candiesSize ;i++)
    {
        if (candies[i]+extraCandies >= max)
            arr[i] = true;

        else
            arr[i] = false;
    }
    *returnSize = candiesSize;
    return arr;
}