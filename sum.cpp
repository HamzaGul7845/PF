#include<stdio.h>
main()
{
	int num,sum=0, digit;
	int mul=1;
	printf("enter a number");
	scanf("%d",& num);
	while(num>0)
	{
		digit=num%10;
		num=num/10;
		printf("%d", digit);
		sum=sum+(digit*mul);
		mul=mul*10;
	}
	printf("\n sum is %d",sum);
}
