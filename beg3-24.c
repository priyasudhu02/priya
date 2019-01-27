#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[5],i,j,temp;
clrscr();
printf("enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;j<n-1;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
