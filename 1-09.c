/******************************************************************************
Exercise 1-9. Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank. 0
*******************************************************************************/

#include <stdio.h>

int main()
{
    int c;
    char was_blank = 0;
    
    while( (c = getchar()) != '\n')
    {
        if(c==' ')
        {
            if(!was_blank)
            {
                putchar(c);
                was_blank = 1;
            }
            
        }
        
        else
        {
            was_blank = 0;
            putchar(c);
        }
    }

    return 0;
}
