#include<stdio.h>
#include<conio.h>
void main()
{
long int n,count=0,rem;
clrscr();
printf("enter the number:");
scanf("%lld",&n);
while(n>0)
{
n=n/10;
count++;
}
printf("%d",count);
getch();
}
