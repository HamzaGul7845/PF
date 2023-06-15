#include<stdio.h>
#include<conio.h>
main()
{
	int  sum=0;
	char ch;
	while(sum<=255)
	{
		ch=getche();
		printf("%c=%d\n", ch,ch);
		sum++;
	}
}
