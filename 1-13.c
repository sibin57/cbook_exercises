/******************************************************************************
Exercise 1-13. Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging. 0
*******************************************************************************/

#include <stdio.h>

#define MAX_WORD_SIZE 256

int main()
{
    int wlens[MAX_WORD_SIZE];
    int c, currwlen, max_len;
    char was_blank;
    
    for( int i=0; i<MAX_WORD_SIZE ; i++)
        wlens[i]=0;
    c = currwlen = max_len = was_blank = 0;
    
    
    while( c != '\n')
    {
        c = getchar();
        
        if(c == ' ' || c == '\n')
        {
            if(!was_blank)
            {
                wlens[currwlen]++;
                if (currwlen > max_len) max_len = currwlen;
                currwlen = 0;
                was_blank = 1;
            }
            
        }
        
        else
        {
            currwlen++;
            was_blank = 0;
        }
    }
    
    for(int i = 1; i <= max_len; i++)
    {
        printf("%i :", i);
        
        for(int j= 0; j <= wlens[i]; j++)
            putchar('#');
        
        putchar('\n');
    }

    return 0;
}
/* TODO problems with last word */
