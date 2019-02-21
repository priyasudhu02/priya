#include <stdio.h>

int main()
{
    int a[50],i,n,k,temp;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter k:");
    scanf("%d",&k);
    for(i=0;i<=k;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
