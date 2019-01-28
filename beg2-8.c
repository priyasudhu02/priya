            #include<stdio.h>
	#include<conio.h>
	void main()
	{
	  int a,b,i,j,x,y,count,sum,total,rem;
	  clrscr();
	  scanf("%d%d",&a,&b);
	  for(i=a;i<=b;i++)
	  {
	    x=i;
	    y=i;sum=1,count=0;total=0;
	    while(x!=0)
	    {
	      count++;
	      x=x/10;
	    }
	    while(y!=0)
	    {
	      rem=y%10;
	      for(j=0;j<count;j++)
	      {
	        sum=sum*rem;
	      }
	      total=total+sum;
	      sum=1;
	      y=y/10;
	    }
	    if(total==i)
	    {
	      printf("%d",i);
	    }
	  }
	  getch();
	}

