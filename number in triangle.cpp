#include<stdio.h>
main()
{
	int rownum,row,col;
	int number=1;
	printf("enter number of rows");
	scanf("%d",&rownum);
	for(row=1;row<=rownum;row++)
	{
		for(col=1;col<=row;col++)
		{
		//	if(row+col<=rownum)
		//	{
		//		printf(" ");
		//	}
		//	else
		//	{
				printf("%d",number);
				number++;
		//	}
		}
		printf("\n");
	}
}
