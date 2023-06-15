/*#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0;
	char ch;
	while ()
	{
		ch=getche();
		if (ch==10)
		{
			break;
		}
		sum=sum+(ch-48);
	}
	printf("%d is sum", sum);
}*/
#include<stdio.h>
main()
{
	int num,sum;
	int digit;
	printf("enter a number");
	scanf("%d", & num);
	while(num>0)
	{
		digit=num%10;
		num=num/10;
		
		sum=sum+digit;
	}

printf("sum is %d",sum);
}
