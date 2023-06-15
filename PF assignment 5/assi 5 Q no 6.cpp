#include<stdio.h>
main()
{
	int num, count=1;
	printf("enter a number of which you want to find divisors ");
	scanf("%d", & num);
	printf("divisors are");
	while(count<=num)
	{
		if(num%count==0)
	   {
		printf(" %d", count);
	   }
		count++;
	}
	
}

