#include<stdio.h>
#include<math.h>
main()
{
	int num,sum=0,p=0;
	printf("enter a number of you want to find decimal number");
	scanf("%d",&num);
	while(num>0)
	{
		int d=num%10;
		 num=num/10;
		 sum=sum+d*pow(2,p);
	    p++;
	}
	printf("%d", sum);
}
