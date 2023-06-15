#include<stdio.h>
main()
{
	float num1,num2;
	printf("enter first number");
	scanf("%f",&num1);
	printf("enter second number\n");
	scanf("%f",&num2);
	if(num1>num2)
	{
		printf("%f is greater number",num1);
	}else 
	{
		printf("%f is greater number ",num2);
	}
}
