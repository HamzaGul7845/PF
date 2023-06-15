#include<stdio.h>
main()
{
	int num;
	printf("enter a number to check weather it is prime or not : ");
	scanf("%d",&num);
	int divisor=0;
	for(int count=1;count<=num;++count)
	{
		int rem=num%count;
		if (rem==0)
		{
			divisor++;
		}
	}
	printf("%d", divisor);
	/*if (divisor==0)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}*/

}
