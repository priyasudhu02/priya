#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],n,i,k,sum=0;
  clrscr();
  printf("enter the array size:");
  scanf("%d",&n);
  printf("enter the array value:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enter the k");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
      sum=sum+a[i];
  }
  printf("%d",sum);
  
  getch();

}
