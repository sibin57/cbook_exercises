#include <stdio.h>

#define MAXLINE 1024


int my_getline(char* str, int lim)
{
	int c;
	char* iter;
	iter = str;

	while (iter - str < lim-1 && (c = getchar()) != EOF && c != '\n')
	{
		*iter = c;
		iter++;
	}

	if (c == '\n')
	{
		*iter = c;
		iter++;
	}
	*iter = '\0';

return iter - str;
}

void reverse(char* str, int size)
{
    char temp;
    char* end;
    
    end = str + size-1;
    
    while (str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;
        
        str++;
        end--;
    }
}

int main()
{
	int size;
	char str[MAXLINE];
	
	size = my_getline(str, MAXLINE);
	
	reverse(str, size);
	
	printf("%s", str);
	
return 0;
}
