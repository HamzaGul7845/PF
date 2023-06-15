//	Enter a number and show its factors upto a specific number. 
#include<stdio.h>
main()
{
int num, limit, count=1;
printf("enter a number of which you want to find factors");
scanf("%d", & num);
printf("enter limit to which you want to find factors");
scanf("%d",& limit);
while(count<=limit)
  {
	
	
	printf("%d ",num*count);
	
 count++;
  }
}

