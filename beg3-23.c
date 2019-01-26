#include <stdio.h>
 void main()
{
  int a[100], min,n, i,z= 1;
 
  printf("Enter the number of elements in array\n");
  scanf("%d", &n);
 
  printf("Enter the integer");
 
  for (i= 0; i<n; i++)
    scanf("%d", &a[i]);
 
  min= a[0];
 
  for (i= 1; i< n;i++)
  {
    if (a[i] < min)
    {
       min= a[i];
       z= i+1;
    }
  }
 
  printf("%d",min);
}
