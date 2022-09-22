// int Roman_values(char)     is a function the returns that numbers corresponding to the roman numerals

int Roman_Values(char s)
{
    switch (s)
    {
        case 'I':
            return 1;
            
        case 'V':
            return 5;
            
        case 'X':
            return 10;
            
        case 'L':
            return 50;
            
        case 'C':
            return 100;
            
        case 'D':
            return 500;
            
        case 'M':
            return 1000;

        default:
            return 0;
    }
}

int romanToInt(char * s)
{
    // Result is initially set to the value of the first roman numeral 
    
    int Result= Roman_Values(s[0]);            
    int i =1;
    
    // the for loop will iterate untile the string is over ('\0' means the end of a string)
    
  for (i; s[i]!= '\0'; i++)                     
  {
      // the i is set to 1 so in the first iteration u are already on the second number, so u have to check the value of the previous number
      
        int Prev_Num = Roman_Values(s[i-1]);   
        int Curr_Num = Roman_Values(s[i]);
        
       // the if checks if the previous number is larger than the current or not
      
        if (Prev_Num<Curr_Num)                
        {
            Result = Result - Prev_Num + (Curr_Num - Prev_Num); 
        }
      
      /* if the current is larger this means that we are on the special case where a small number comes before a large which means
       * the small one will be substracted form the large one ( the first (-previous) is for substracting the value of the previous
       * number that has been stored in the Result variable)
       */
  
        else
        {
        Result = Result + Curr_Num;    
        }
    }


    return Result;
}
