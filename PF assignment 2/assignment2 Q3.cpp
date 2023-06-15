#include<stdio.h>
main()
{
	int num;
	printf("enter a number");
	scanf("%d", & num);
	int rem=num%2;
	if(rem==0)
	{
		printf("%d is even",num);
	} else 
	   {
	   	printf("%d is odd",num);
	   }
}
