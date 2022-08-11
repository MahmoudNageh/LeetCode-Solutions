
bool isPalindrome(int x)
{
    int len;
    // 2^31 is a 10 char so an array of 11 is enough
    char mystr[11];
    
    // all negative numbers are not palindrome
    if (x < 0) 
    {
        return 0;
    }
    
    // for the positive numbers
    else 
    {
        
        //converting int x to string  
        len = sprintf(mystr, "%d", x); 

        // check if the numbers on the edges are equal and work your way to the middle
        for( int i = 0; i <= len -i-1 ; i++)
        {
            if(mystr[i] != mystr[len-i-1]) 
            { 
                return 0;
            }
        }
    }
 
    return 1;

}