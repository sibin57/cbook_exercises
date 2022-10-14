#include <stdio.h>

#define MAXLINE 1024
#define TABWIDTH 4

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

int my_getinput(char* str, int lim)
{
	int c;
	char* iter;
	iter = str;

	while (iter - str < lim-1 && (c = getchar()) != EOF)
	{
		*iter = c;
		iter++;
	}
	*iter = '\0';

return iter - str;
}


int main()
{
	int size;
	char str[MAXLINE*TABWIDTH];
	char* s, *end;
	s = str;
	
	size = my_getinput(str, MAXLINE);
	
	while(*s != '\0')
	{
	    if(*s == '\t')
	    {
	        end = str + size;
	        while (end != s)
	        {
	            *(end+TABWIDTH)=*end;
	            end--;
	        }
	        
	        while(end != s+TABWIDTH+1)
	        {
	            *end = ' ';
	            end++;
	        }
	        s+=TABWIDTH;
	        size+=TABWIDTH;
	    }
	    s++;
	}
	
	printf("%s", str);
	

return 0;
}