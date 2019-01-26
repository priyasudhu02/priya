#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i;
 clrscr();
 printf("enter a");
 scanf("%d",&a);
 printf("enter b");
 scanf("%d",&b);
 for(i=a+1;i<b;i++)
 {
     if(i%2==0)
     {
         printf("%d\n",i);
     }
 }
 
  getch();

}
