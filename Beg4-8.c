#include<stdio.h>
	#include<string.h>
	voidswap(int*, int *);
	voidmain()
	{
	int num1, num2;
	scanf("%d%d", &num1, &num2);
	swap(&num1, &num2);        
	printf("\n%d%d", num1, num2);
	}
	voidswap(int *x, int *y)
	{
	    *x = *x ^ *y;
	    *y = *x ^ *y;
	    *x = *x ^ *y;
	}


