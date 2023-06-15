#include<stdio.h>
main ()
{
	int line;
	printf("enter number of lines");
	scanf("%d",& line);
	int i,j;
	int s=line/2;
	int p=line/2+1;
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=p;j++)
		{
			if(j<=s)
			{
				printf(" ");
			}
			else
			{
			printf("*");
		    }
		}
		if(i<=s)
		{
			s--;
			p++;
		}
		else
		{
		s++;
		p--;	
		}
		printf("\n");
	}
	}
	
