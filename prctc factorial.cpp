#include<stdio.h>
int main()
{
	int n, fact=1,i=1;
	printf("enter a number of which you want to find factorial : ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
printf("the factorial of '%d' is %d",n,fact);
}
