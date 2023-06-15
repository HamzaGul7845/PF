#include<stdio.h>
main()
{
	int num;
	int space=0;
	int p=5;
	printf("enter number of rows");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=i*2;j--)
		{
			if(j<=space)
			{
				printf("*");
			}
			else 
			{
			printf(" ");	
			}
		}
	 if(i<num/2||i>num/2)
	 {
	 	space++;
	 }
	 else
	 {
	 	space--;
	 }
	 printf("\n");
	}
}
