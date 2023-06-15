#include<stdio.h>
int main()
{
	int count;
	printf("enter anumber from which you want to start sum : ");
	scanf("%d",& count);
	int n;
	int sum=0;
	printf("enter a number to which you want to find sum : ");
	scanf("%d",& n);
	while(count<=n)
	{
		sum=sum+count;
		count++;
	}
	printf("the sum of numbers is %d", sum);
}
