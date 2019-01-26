#include<stdio.h>
#include<conio.h>
void main()
{
    int n,temp,rem,sum=0;
    clrscr();
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("yes");
}else{
    printf("no");
}
getch();
}
