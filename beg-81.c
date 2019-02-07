#include <stdio.h>
int main()
{
    int kabali,opp;
    scanf("%d %d",&kabali,&opp);
    if(kabali<opp)
    {
        kabali=opp-kabali;
    }
    else
    {
        kabali=kabali-opp;
    }
    printf("%d",kabali);
    return 0;
}
