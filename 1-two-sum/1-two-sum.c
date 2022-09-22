
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    //set the return size to 2 because the output will be only 2 numbers
    *returnSize=2;
    
    // a malloc array of size 2 int that will contain the answers
    int *out = (int*)malloc(2*sizeof(int));
    
    /* nested for loops the first will iterate from the first element
       to the second last element (becasue the sum of the last to element
       will alredy be coverd with the second to last)
       
       the second for loop will iterat from the next element of the first 
       loop so we dont add the same variable to each other.
       
       the if statment will just check if the sum is equal to the target or not 
       if it is equal it will put the indices of both of the variables in the malloced array
       
       there also should be an else (for when there is no answer but it's not necessary here beacuse the test are vaild)
       
       ***** don't forget to free the malloced array in main ****
       */
    
    for(int i=0; i<(numsSize-1) ;i++)
    {
        for(int j=(i+1); j<numsSize ; j++)
        {
            if (nums[i]+nums[j]== target)
            {
                out[0]=i;
                out[1]=j;
                return out;
            }
        }
    }
    return 0;
}