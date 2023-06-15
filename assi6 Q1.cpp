#include<stdio.h>
main()
{
	int num, smallest,largest, count=1,s;
	float sum=0; float average;
	
	printf("enter 10 numbers\n");
	scanf("%d", & num);
	sum=sum+num;
	while(count<=9)
	{
		largest=num;
		smallest=num;
		
		scanf("%d", & num);
		if(num>largest)
		{
			largest=num;
		}
		if(num<smallest)
		{
			smallest=num;
		}
	
		count++;
		sum=sum+num;
			 
	}
	average=sum/10;
printf(" sum is %f\n", sum);
printf("average is %f\n", average);
printf("largest number is %d\n", largest);
printf("smallest number is %d\n", smallest);
}
