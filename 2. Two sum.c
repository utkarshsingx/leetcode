int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize= 2;
    int *returnvalues=malloc((*returnSize)*sizeof(int));
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            
            if(nums[i]+nums[j]==target)
            {
                //  printf ("%d", i);
                //   printf ("%d", i);
                returnvalues[0] = i;
                returnvalues[1] = j;
                break;
            }
        }
    }
    
    
    return returnvalues;
}
