#include <stdio.h>
int main()
{
    int n,rem,sum=0,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem*rem;
            n=n/10;
        }
        printf("%d",sum);
    }
        return 0;
}
