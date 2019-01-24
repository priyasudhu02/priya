#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c=0;
    clrscr();
    printf("enter no");
    scanf("%ld",&n);
    while(n>0)
    {
       n=n/10;
       c++;
    }
        printf("%d",c);
    getch();
}
