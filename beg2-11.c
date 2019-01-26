#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a,b,c= 1;
  printf("\nEnter any Number : ");
  scanf(" %d", &a);

  printf("\nEnter the Exponent Vlaue: ");
  scanf("%d", &b);
    
  for(i = 1; i <=b; i++)
  {
  	c= c*a;
  }
  
  printf("\n%d",c);
  getch();

}
