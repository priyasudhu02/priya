#include<stdio.h>
	intmain()
	{
	char a[100];
	inti,count=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]!='')
	{
	count++;
	}
	}
	printf("%d",count);
	return0;
}
