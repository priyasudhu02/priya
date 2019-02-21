#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,k,n,j,temp;
clrscr();
printf("enter the array size");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the kth value");
scanf("%d",&k);
for(i=0;i<k;i++)
{
for(j=n-1;j>=0;j--)
{
temp=a[n-1];
a[n-1]=a[j];
a[j]=temp;
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}getch();
}

