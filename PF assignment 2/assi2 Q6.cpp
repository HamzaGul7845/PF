#include<stdio.h>
main()
{
	float angle1,angle2,angle3,sum;
	printf("enter first angle of trianlge");
	scanf("%f",&angle1);
	printf("enter second angle of triangle");
	scanf("%f",&angle2);
	printf("enter third sngle of a triangle");
	scanf("%f",&angle3);
	sum=angle1+angle2+angle3;
	if(sum==180)
	{
		printf("triangle possible with these angles");
	}
	else
	{
		printf("triangle not possible");
	}
}
