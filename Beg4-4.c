#include<stdio.h>
	intmain()
	{
	char a[100];
	inti,count=0,n=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if((a[i]=='.')||(a[i+1]==''))
	{
	count++;
	n++;
	}
	}
	if(n==0)
	{count=0;
	printf("%d",count);
	}
	else
	{
	printf("%d",count);
	}
	return0;
	}




