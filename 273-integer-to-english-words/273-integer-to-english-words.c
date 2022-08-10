char *digitToWord(int *num)
{
    switch(*num) 
    {
        case 90:                                    //**TENS
            (*num) -= 90; return "Ninety ";
        case 80:
            (*num) -= 80; return "Eighty ";
        case 70:
            (*num) -= 70; return "Seventy ";
        case 60:
            (*num) -= 60; return "Sixty ";
        case 50:
            (*num) -= 50; return "Fifty ";
        case 40:
            (*num) -= 40; return "Forty ";
        case 30:
            (*num) -= 30; return "Thirty ";
        case 20:
            (*num) -= 20; return "Twenty ";
        case 19:                                    //**TEENS
            (*num) -= 19; return "Nineteen ";
        case 18:
            (*num) -= 18; return "Eighteen ";
        case 17:
            (*num) -= 17; return "Seventeen ";
        case 16:
            (*num) -= 16; return "Sixteen ";
        case 15:
            (*num) -= 15; return "Fifteen ";
        case 14:
            (*num) -= 14; return "Fourteen ";
        case 13:
            (*num) -= 13; return "Thirteen ";
        case 12:
            (*num) -= 12; return "Twelve ";
        case 11:
            (*num) -= 11; return "Eleven ";
        case 10:
            (*num) -= 10; return "Ten ";
        case 9:                                     //**ONES
            (*num) -= 9; return "Nine ";
        case 8:
            (*num) -= 8; return "Eight ";
        case 7:
            (*num) -= 7; return "Seven ";
        case 6:
            (*num) -= 6; return "Six ";
        case 5:
            (*num) -= 5; return "Five ";
        case 4:
            (*num) -= 4; return "Four ";
        case 3:
            (*num) -= 3; return "Three ";
        case 2:
            (*num) -= 2; return "Two ";
        case 1:
            (*num) -= 1; return "One ";
        case 0:
            (*num) -= 0; return "Zero ";
        default: return "Error";
    }
}

char *numberToWords(int num) {
    
    // return Zero in the condition of 0 as input
    if (num == 0) return "Zero";

    int tmp, tmp2;
    
    // Allocating a dynamic memory  
    char *s = malloc(1024);
    s[0] = 0;
    
    int Billions = num / 1000000000;
    num -= (Billions * 1000000000);
    
    int Millions = num / 1000000;
    num -= (Millions * 1000000);
    
    int Thousands = num / 1000;
    num -= (Thousands * 1000);
    
    //*********** BILLIONS *********//
    if (Billions > 0)
    {
        strcat(s, digitToWord(&Billions)); // a max of 2 bil.
        strcat(s, "Billion ");
    }
   
    //*********** MILLIONS *********//
    if (Millions > 0)
    {
        if (Millions > 99)
        {
            tmp = Millions / 100;
			tmp2 = tmp;
            strcat(s, digitToWord(&tmp));
            strcat(s, "Hundred ");
            Millions -= tmp2 * 100;
        }
        
        if ((Millions < 20) && (Millions > 10)) 
        {
            strcat(s, digitToWord(&Millions));
        }
        
        if (Millions > 9) {
            tmp = Millions / 10;
            tmp2 = tmp;
            tmp *= 10;
            strcat(s, digitToWord(&tmp));
            Millions -= tmp2*10;
        }
        
        if (Millions > 0) 
        {
            strcat(s, digitToWord(&Millions));
        }
        strcat(s, "Million ");
    }
    
    //*********** THOUSANDS *********//
    if (Thousands > 0)
    {
        if (Thousands > 99) {
            tmp = Thousands / 100;
            tmp2 = tmp;
            strcat(s, digitToWord(&tmp));
            strcat(s, "Hundred ");
            Thousands -= tmp2 * 100;
        }
        
        if ((Thousands < 20) && (Thousands > 10)) 
        {
            strcat(s, digitToWord(&Thousands));
        }
        
        if (Thousands > 9) 
        {
            tmp = Thousands / 10;
            tmp2 = tmp;
            tmp *= 10;
            strcat(s, digitToWord(&tmp));
            Thousands -= tmp2*10;
        }
        
        if (Thousands > 0) 
        {
            strcat(s, digitToWord(&Thousands));
        }
        strcat(s, "Thousand ");
    }
    
    //*********** HUNDRES/TEN/ONES *********//
    if (num > 99)
    {
        tmp = num / 100;
        tmp2 = tmp;
        strcat(s, digitToWord(&tmp));
        strcat(s, "Hundred ");
        num -= tmp2 * 100;
    }
    
    if ((num < 20) && (num > 10)) 
    {
        strcat(s, digitToWord(&num));
    }
    
    if (num > 9) 
    {
        tmp = num / 10;
        tmp2 = tmp;
        tmp *= 10;
        strcat(s, digitToWord(&tmp));
        num -= tmp2*10;
    }
    
    if (num > 0)
    {
        strcat(s, digitToWord(&num));
    }
    
    tmp = strlen(s);
    if (s[tmp-1] == ' ') 
        {
            s[tmp-1] = 0;
        }
    return s;
}
