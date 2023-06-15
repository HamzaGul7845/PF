#include<stdio.h>
main()
{
	int num=0, res;
	char ch , sign;
	int first=0;
	while(ch!='='&&ch!=10)
	{
		ch=getche( );
		if(ch>=48&&ch<=57)
		{
			num=num*10+(ch-48);
		}
		else if(first==1)
		{
		res=num;
		num=0;
		first=0;
		sign=ch;	
		}
		else
		{
			switch(sign)
			case'+':
				res=res+num;
				sign=ch;
				num=0;
				break;
		/*	case'-':
				res=res-num;
				sign=ch;
				num=0;
				break;
			case'*':
				res=res*num;
				sign=ch;
				num=0;
				break;
			case'/':
				res=res/num;
				sign=ch;
				num=0;
				break;
			case'%':
				res=res%num;
				sign=ch;
				num=0;
				break;*/
		}
	}
	printf("%d", res);
}
