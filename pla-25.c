#include<stdio.h>
#include<string.h>
	void main()
	{
	    char str[100][200],a[100];
	    int i,n,j;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%s",str[i]);
	    }
	     for(i=0;i<n;i++)
	     {
	          for(j=0;j<n;j++)
	          {
	         if(strlen(str[i])<strlen(str[j]))
	          {
	              strcpy(a,str[i]);
	              strcpy(str[i],str[j]);
	              strcpy(str[j],a);
	          }
	     }
	     }
	     for(i=0;i<n;i++)
	     {
	         printf("%s ",str[i]);
	     }
	}


