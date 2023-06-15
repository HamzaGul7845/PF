// check palined rome or not.
#include<stdio.h>
main()
{
	int num;
	printf("enter a number to check whether it is palined-rome or not : ");
	scanf("%d",& num);
	int orinum=num;
	int reverse=0;
	while(num>0)
	{
		int rem=num%10;
		num=num/10;
		reverse=(reverse*10)+rem;
	}
	printf("%d\n", reverse);
	if(reverse==orinum)
	{
		printf("entered number is palined-rome");
	}
	else
	{
		printf("entered number is not palined-rome");
	}
}
