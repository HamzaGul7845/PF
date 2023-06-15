#include<stdio.h>
main()
{
	float side1,side2,side3;
	printf("enter first side of triangle");
	scanf("%f",& side1);
	printf("enter second side of triangle");
	scanf("%f",& side2);
	printf("enter third side of triangle");
	scanf("%f",&side3);
	if(side1==side2&&side2==side3)
	{
		printf("it is equilateral triangle");
	}else
	if(side1==side2||side2==side3||side1==side3)
	{
		printf("it is an isosceles triangle");
		
	}else 
	{
		printf("it is scalene triangle");
	}
}
