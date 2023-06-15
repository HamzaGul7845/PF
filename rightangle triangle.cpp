#include<stdio.h>
main()
{
	int rows,col,rownum,colnum;
	printf("enter number of rows");
	scanf("%d",&rownum);
//	printf("enter number of coloumns");
//	scanf("%d",&colnum);
	for(rows=1;rows<=rownum;rows++)
	{
		for(col=1;col<=rows;col++)
		{
			printf("*");
		}
	printf("\n");
	}
}
