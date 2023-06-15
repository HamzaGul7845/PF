#include<stdio.h>
main()
{
	char ch;
	printf("enter any character\n");
	scanf("%c",& ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("entered character %c is an alphabet",ch);
	}
    else	if(ch>=0&&ch<=9)
	{
		printf("entered character %c is a digit",ch);
	}
	else
	{
		printf("entered character %c is special character",ch);
	}
}
