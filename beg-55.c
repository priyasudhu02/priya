#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,p;
clrscr();
printf("enter the number:");
scanf("%d%d",&n,&m);
p=n*m;
if(p%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
