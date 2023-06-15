#include<stdio.h>
main()
{
	int days;
	float fine;
	printf("enter number of late days");
	scanf("%d",& days);
	if(days==0)
	{
		printf("thanks");
	}
	if(days>0&&days<=5)
	{
		fine=0.50*days;
	}
	if(days>=6&&days<=10)
	{
		fine=1*days;
	}
	if(days>10)
	{
		fine=5*days;
	}
	if(days>30)
	{
		printf("membership cancelled\n and ");
	}
	printf("you have to pay fine of %f rupee",fine);
	
}
