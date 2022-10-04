/******************************************************************************
Exercise 1-14. Write a program to print a histogram of the freqencies
of different charecters in its input. 0
*******************************************************************************/

#include <stdio.h>

#define MAX_CHAR 256

int main()
{
    int char_freq[MAX_CHAR];
    int c, max_char;
    
    for( int i=0; i<MAX_CHAR; i++)
        char_freq[i]=0;
    c = max_char = 0;
    
    
    while( (c = getchar()) != '\n')
    {
	char_freq[c]++;

	if(c > max_char) 
		max_char = c;
    }

    for (int i = 0; i <= max_char; i++)
    {
	    if (char_freq[i] > 0)
		    printf("%c: %i\n", i, char_freq[i]);
    }
    return 0;
}
