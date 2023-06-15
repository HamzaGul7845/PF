#include<stdio.h>
main()
{
	int num, sum=0, count=1;
	float avg;
	    while(count<=10)
	     {
	     	printf("enter a number", count);
	     	scanf("%d", & num);
	     	sum=sum+num;
	     	count++;
		 }
		 printf("sum of numbers is %d \n", sum);
		 avg=sum/10.0;
		 printf("average of numbers is %f", avg);
}
