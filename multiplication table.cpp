#include<stdio.h>
main()
{
	int num;
	printf("enter a number to prints its table");
	scanf("%d",&num);
	for(int i=1;i<=10;i++)
	{
		int res=num*i;
		printf("%d * %d = %d \n", num,i,res);
	}
}
