#include<stdio.h>
#include<conio.h>
void main()
{
int p,n,m;
clrscr();
printf("enter the numbers");
scanf("%d%d",&n,&m);
p=n+m;
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
