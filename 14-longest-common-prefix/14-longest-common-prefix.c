#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize)
{
    // if there is only one string return it;
    if (strsSize ==1)
        return strs[0];
    
    char * res=(char *)malloc(10000*sizeof(char));
    char temp;
    int check = 0;
    int len;
    
    // if the length is null return ""
    len = strlen(strs[0]);
    if (len == 0)
        return "";
    
    // loop on the strings
    for(int i = 0; i < len; i++)
    {
        temp = strs[0][i];
        
        // loop on the strings
        for(int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] == temp)
                check = 1;
            
            else
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            res[i] = temp;
            res[i+1]='\0';
        }
        else
        {
            res[i]='\0';
            return res;
        }
    }
    return res;
}