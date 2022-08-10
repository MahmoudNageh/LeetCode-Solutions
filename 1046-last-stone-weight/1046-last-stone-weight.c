int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}

int lastStoneWeight(int* stones, int stonesSize)
{
    int i = stonesSize -1;
    
    for (i ; i > 0; i--) 
    {
        // void qsort(void *base, size_t nitems, size_t size, int (*comparator)(const void *, const void*))

        qsort(stones, i+1, sizeof(int), comparator);
        stones[i-1] = stones[i] - stones[i-1];
    }

    return stones[0];  
}

/*  sort
 *  substract the last two elements
 *  put the value in the second to last element
 *  sort again but ignoring the last element (sort for size -1)
 */