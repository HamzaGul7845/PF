#include<stdio.h>
main()
{
	int rows,rowsnum,col;
	printf("enter number of rows");
	scanf("%d",& rowsnum);
	for(rows=1;rows<=rowsnum;rows++)
	{
		for(col=1;col<=rowsnum;col++)
		{
		if(rows+col<=rowsnum)
		{
			printf(" ");
	  }else
		{
			printf("*");
		}
		}
		printf("\n");
	}
}

