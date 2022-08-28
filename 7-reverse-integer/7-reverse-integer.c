
#define MAX pow(2,31)
#define MIN pow(-2,31)

int reverse(int x)
{
    long result = 0;
    int temp = 0;
    
    while(x != 0)
    {
        temp = x % 10;
        x = x / 10;
        result = (result * 10) + temp; 
    }
    
    return (result > MAX || result < MIN) ? 0: result;
}