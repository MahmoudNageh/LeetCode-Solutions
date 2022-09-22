

char* reverseWords(char* s) 
{
    // Total String Length
    int string_length = strlen(s);
    
    // Two counters, one counts the chars in a word, the other keeps track of the total char counted
    int word_length = 0;
    
    int char_count = 0;
    
    // loop through the whole string
    while (string_length >= 0)
    {   
        // if you encounterd a whitesspace or the end of a string 
        // swap the chars in this word
        if(s[char_count] == ' ' || s[char_count] == '\0')
        {
            int rev_word_start  = char_count - word_length;
            int rev_word_end    = char_count-1;
            
            while (rev_word_start < rev_word_end)
            {
                char temp = s[rev_word_start];

                s[rev_word_start] = s[rev_word_end];

                s[rev_word_end] = temp;
                
                rev_word_start++;
                rev_word_end--;
            }
            
            // reset the word length counter 
            word_length = 0; 
            char_count++;
        }
        // if you still reading chars: increament the char and word counters
            else
            {
                char_count++;
                word_length++;
            }
        
        string_length--;
    }

    return s;
}
