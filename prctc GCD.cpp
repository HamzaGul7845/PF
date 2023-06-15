#include<stdio.h>
int main()
{
	int n1,n2,nom,denom,rem;
	printf("enter two numbers");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		nom=n1;
		denom=n2;
	}
	else
	{
		nom=n2;
		denom=n1;
	}
	while(denom>0)
	{
		rem=nom%denom;
		nom=denom;
		denom=rem;
	}
	printf("GCD is %d", nom);
}
