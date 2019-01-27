#include <stdio.h>
#include <math.h>
 
int main()
{
     int a, d, n, i, t;
     int sum = 0;
 
     printf("Enter a: ");
     scanf("%d", &a);
     printf("Enter n:");
     scanf("%d", &n);
     printf("Enter d:");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     t = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= t; i = i + d )
     {
          if (i != t)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
