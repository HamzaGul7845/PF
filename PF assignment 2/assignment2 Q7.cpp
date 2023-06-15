#include<stdio.h>
main()
{
	int year;
	printf("enter a year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("its a leap year");
	} else if(year%100==0)
 {
 	printf("not a leap year");
	 }	else if(year%400==0)
	 {
	 	printf("leap year");
	 }else{
	 	printf("not leap year");
	 }
}
