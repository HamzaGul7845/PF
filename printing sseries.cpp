#include<stdio.h>
main()
{
	int p=1;
	int count=1;
	while(count<=10)
	{
		printf("%d\t", p);
		p=p+count%5;
		count++;
	}
}
