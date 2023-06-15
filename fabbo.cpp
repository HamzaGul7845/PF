#include<stdio.h>
int main()
{
	int n1=0;
	int n2=1;
	int n3=n1+n2;
	int term;
	printf("enter number of term to which you want to find fabonacci series");
	scanf("%d",& term);
	printf("%d %d  ",n1,n2);
	int count=3;
	while(count<=term)
	{
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
		count++;
	}
}
