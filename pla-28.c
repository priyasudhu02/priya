#include<stdio.h>
#include<string.h>
	int main()
	{
	    char a[100000],b[100000];
	    int i,l,j=0;
	    gets(a);
	    l=strlen(a);
	    for(i=0;i<l;i++)
	    {
	        if(a[i]!=' ')
	        {
	            b[j]=a[i];
	            j++;
	        }
	    }
	    puts(b);
	    return 0;
	}
