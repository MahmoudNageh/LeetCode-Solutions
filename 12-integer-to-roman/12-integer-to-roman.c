char * intToRoman(int num)
{
    // Allocating a dynamic memory for the array assuming 20 as a maximmum
    char *s   = malloc(20*sizeof(char));  
    
    // i is the string counter
    int i     = 0;
    int Check = num / 1000;

    // Checking for 1000's (M)
    if (Check >= 1)
    {
        for (int j = 0; j < Check; j++)
        {
        s[i] = 'M';
            i++;
        }
    }
    
    // removing the 1000's and going on with 100's
    num = num % 1000;
    Check = num / 100;
    
    //Checking for 100's
    if (Check == 9)
    {
        s[i] = 'C';
        i++;
        s[i] = 'M';
        i++;
    }
    
    else if (Check >= 5)
    {
        s[i] = 'D';
        i++;
        
        for (int j = 0; j < (Check-5); j++)
        {
            s[i] = 'C';
            i++;
        }
    }
    
    else if (Check == 4)
    {
        s[i] = 'C';
        i++;
        s[i] = 'D';
        i++;
    }
    
    else if (Check >= 1)
    {
        for (int j = 0; j < Check ;j++)
        {
            s[i] = 'C';
            i++;
        }   
    }
    
    // removing the 100's and going on with 10's
        num = num % 100;
        Check = num /10;
    
    
    //Checking for 10's
    if (Check == 9)
    {
        s[i] = 'X';
        i++;
        s[i] = 'C';
        i++;
    }
    
    else if (Check >= 5)
    {
        s[i] = 'L';
        i++;
        
        for (int j = 0; j < (Check-5) ; j++)
        {
            s[i] = 'X';
            i++;
        }
    }
    
    else if (Check == 4)
    {
        s[i] = 'X';
        i++;
        s[i] = 'L';
        i++;
    }
    
    else if (Check >= 1)
    {
        for (int j = 0; j < Check; j++)
        {
            s[i] = 'X';
            i++;
        }   
    }
    
    // removing the 10's and going on with 1's
    Check = num %10;
    
    //Checking for 1's
    if (Check == 9)
    {
        s[i] = 'I';
        i++;
        s[i] = 'X';
        i++;
    }
    
    else if (Check >= 5)
    {
        s[i] = 'V';
        i++;
        
        for (int j = 0; j < (Check-5); j++)
        {
            s[i] = 'I';
            i++;
        }
    }
    
    else if (Check == 4)
    {
        s[i] = 'I';
        i++;
        s[i] = 'V';
        i++;
    }
    
    else if (Check >= 1)
    {
        for (int j = 0; j < Check; j++)
        {
            s[i] = 'I';
            i++;
        }   
    }

    s[i]='\0';
    
    // Don't forget fo free(s) in the main function 
return s;
}

