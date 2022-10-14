/*
 Write a program to remove all comments from a C programm. 
 Don't forget to handle quoted strings and character constants properly.
 C coments do not nest.
*/

#include <stdio.h>

int main()
{
    int c;
    char is_oneliner, is_multiliner, is_prev_slash, is_prev_star;
    is_oneliner = is_multiliner = is_prev_slash = is_prev_star = 0;

    while((c = getchar()) !=EOF)
    {
        if(is_oneliner || is_multiliner)
            continue;
        else if (c == '/') 
        {
            if (is_prev_slash)      // "//"
                is_oneliner = 1;
            else if (is_prev_star)  // "*/"
                is_multiliner = 0;
            else                    // "/."
                is_prev_slash = 1;

            is_prev_star = 0;
        }
        
        else if(c == '*')
        {
            if(is_prev_slash)       // "/*"
                is_multiliner = 1;
            else                    //"*."
                is_prev_star = 1;

            is_prev_slash = 0;
        }
        
        else if(c == '\n')
        {
            is_prev_slash = is_prev_star = is_oneliner = 0;
            putchar(c);
        }
        else
        {
            is_prev_slash = is_prev_star = 0;
            putchar(c);
        }

    }
        putchar(EOF);
return 0;
}
