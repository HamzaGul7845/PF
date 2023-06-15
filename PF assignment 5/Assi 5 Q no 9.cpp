//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another
#include<stdio.h>
main()
{
	int base, exponent, result=1,count=1;
	printf("enter base");
	scanf("%d", & base);
	printf("enter exponent");
	scanf("%d", & exponent);
	while(count<=exponent)
	{
		result=result*base;
		count++;
	}
	printf("answer is %d", result);
}
