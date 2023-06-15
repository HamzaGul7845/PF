#include<stdio.h>
int main()
{
	int n1=0, count=3;
	int n2=1;
	int n3=n1+n2;
	//printf("%d  %d ", n1, n2 );
	while (count<= 15)
	{
		//printf(" %d ",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
		count ++;
	}
	printf ("%d", n3);
}
