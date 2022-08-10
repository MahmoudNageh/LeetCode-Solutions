
int maxArea(int* height, int heightSize)
{ 
    int max   = 0;
    int check = 0;
    int left  = 0;
    int right = heightSize -1;
    
    while (left < right)
    {
        check = (right-left) * ( height[left] < height[right] ? height[left++] : height[right--]);
        max   = max < check ? check : max;  
    }
    
    return max;
}
