//Write a program to calculate and print the sum of all multiples of 7 from 1 to 100.
#include<stdio.h>
main()
{
	int count=1 , sum=0;
	while(count<=100)
	{
		if(count%7==0)
		{
			sum=sum+count;
			
		}
	count++;
	}
	printf("the sum of multiples of 7 is %d", sum);
}
