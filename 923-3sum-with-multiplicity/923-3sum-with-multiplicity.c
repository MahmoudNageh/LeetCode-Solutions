/*

int threeSumMulti(int* arr, int arrSize, int target)
{
    int mod = 1000000007;
    long Flag = 0;
    
    for (int k = 2; k < arrSize; k++)
    {
        for(int j = 1; j < k; j++)
        {
            for(int i = 0; i < j; i++)
            {
                Flag = (arr[i]+arr[j]+arr[k]) == target ? (Flag+1) : Flag;
            }
        }
    }
  return (Flag%mod);      
}
********** This was my answer it works but it takes alot of time and the time limit exceeded ******
with some search i found the answer below
Check ( 3Sum With Multiplicity | Live Coding with Explanation | Leetcode - 923) for more info and explanation 
*/

#define mod (1000000007)

int threeSumMulti(int* arr, int arrSize, int target)
{
    unsigned long long Flag = 0;
    unsigned long long hash[101] = {0};

    for (int i = 0; i < arrSize; i++)
    {
        hash[arr[i]]++;
    }
    
    for (int i = 0; i <= 100; i++) 
    {
        for (int j = i; j <= 100; j++) 
        {
            int k = target - i - j;
            
            if (k < 0 || k > 100) 
                continue;

            if (i < j && j < k)
            {
                Flag += hash[i] * hash[j] * hash[k];
            }
            
            else if (i == j && j == k)
            {
                Flag += hash[i] * (hash[i] - 1) * (hash[i] - 2) / 6;
            }
            
            else if (i == j && i != k)
            {
                Flag += hash[i] * (hash[i] - 1) / 2 * hash[k];
            }
        }
    }
    return (int)(Flag % mod);
}