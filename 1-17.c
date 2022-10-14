#include <stdio.h>

#define MAXLINE 1024
#define LOWLIM 80


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

void my_copy (char* from, char* to)
{
	while(*from != '\0')
	{
		*to = *from;
		from++;
		to++;
	}
}

int main()
{
	int size;
	char str[MAXLINE];
	
	
	while((size = my_getline(str, MAXLINE)) > 0)
	{
	    if(size > LOWLIM)
		    printf("%d--%s", size, str);
	}
	
return 0;
}
