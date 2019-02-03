#include<stdio.h>
#include<conio.h>
void main()
{
long int rem,n,sum=0,rem1;
clrscr();
printf("enter the number:");
scanf("%lld",&n);
while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
while(sum>0)
{
rem1=sum%10;
sum=sum/10;
printf("%lld ",rem1);
}
getch();
}
