/******************************************************************************
Exercise 1-12. Write a program that prints its input one word per line. 0
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
                putchar('\n');
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
