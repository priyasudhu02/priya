#include<stdio.h>
#include<conio.h>
void main()
{
long int n,sum=0,rem;
clrscr();
printf("enter the number:");
scanf("%lld",&n);
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("%lld",sum);
getch();
}
