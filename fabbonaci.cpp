#include<stdio.h>
main()
{
	int n1=1,n2=1,n3=n1+n2;
	int count=3;
//	printf("%d %d\t",n1,n2);
	while (count<=10)
	{
		
		n1=n2;
		n2=n3;
		n3=n1+n2;
		count++;
	}printf("%d\t",n3);
}
