//Write a program to enter a value and calculate its factorial.
#include<stdio.h>
main()
{
	int num, factorial=1, count=1;
	printf("enter a number");
	scanf("%d",& num);
	while(count<num)
	 {
	 	factorial=factorial*count;
	 	count++;
	 }
	 printf("Factorial of %d is %d",num,factorial);
 } 
