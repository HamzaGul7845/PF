#include<stdio.h>
main()
{
	int num1,num2,num3,smallest,largest;
	printf("enter first number");
	scanf("%d",& num1);
	printf("enter second number");
	scanf("%d",& num2);
	printf("enter third number");
	scanf("%d",& num3);
	if(num1 > num2 && num1 > num3)
    {
        printf("%d is largest\n", num1);
    }
 	 if(num2 > num1 && num2 >num3)
    {
        printf("%d is Largest \n", num2);
    }
	 if(num3 > num1 && num3 > num2)
    {
        printf("%d is Largest \n", num3);
    }
    if(num1 < num2 && num1 < num3)
    {
        printf("%d is smallest\n", num1);
    }
	if (num2 < num1 && num2 < num3)
    {
        printf("%d is smallest\n", num2);
    }
    if (num3 < num1 && num3 < num2)
    {
        printf("%d is smallest\n", num3);
    }
}
