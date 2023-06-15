#include<stdio.h>
main()
{
	int first,second;
	printf("enter first number");
	scanf("%d",& first);
	printf("enter second number");
	scanf("%d",& second);
	if (second%first==0)
	{
		printf("%d is divisor of %d",first,second);
	} else
	  {
	  	printf("%d is not a divisor of %d",first,second);
	  }
}
