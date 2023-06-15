#include<stdio.h>
main()
{
	int rows,col,rowsnum;
	printf("enter rows number");
	scanf("%d",&rowsnum);
	for(rows=rowsnum;rows>=1;rows--)
	{
		for(col=rows;col>=1;col--)
		{
			printf("*");
		}
	 printf("\n");
	}
}
