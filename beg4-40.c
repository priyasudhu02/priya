#include<stdio.h>
#include<conio.h>
void main()
{
int f=0,f1=1,f2,i,n;
clrscr();
printf("enter n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
f2=f1+f;
printf("%d\n",f2);
f=f1;
f1=f2;
}
getch();
}
